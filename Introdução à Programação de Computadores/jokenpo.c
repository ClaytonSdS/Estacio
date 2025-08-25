#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    unsigned short int escolhaJogador, escolhaMaquina;

    srand(time(0)); // Inicializando randomizador de números
    escolhaMaquina = (unsigned short int) rand() % 3 + 1; // Gerar número aleatórios inteiros entre [1, 2, 3]

    printf("Inicializando o Jogo de Jokenpô...\n");
    printf("Escolha uma das opções para jogar:\n");
    printf("1. Pedra \n2. Papel \n3. Tesoura\n"); // Fornencendo as opções para o jogador
    scanf("%hu", &escolhaJogador);

    switch(escolhaJogador){
        case 1: // Jogador Selecionou Pedra
            if (escolhaMaquina == 2 // Maquina Selecionou Papel
                ){printf("Você perdeu, a máquina escolheu Papel.\n");}
            else if (escolhaMaquina = 3 // Máquina Selecionou Tesoura
            ){printf("Você ganhou, a máquina escolheu Tesoura.\n");}

            else{printf("Você empatou, a máquina escolheu o mesmo que você.\n");}
            break;

        case 2: // Jogador Selecionou Papel
            if (escolhaMaquina == 1 // Maquina Selecionou Pedra
                ){printf("Você ganhou, a máquina escolheu Pedra.\n");}
            else if (escolhaMaquina = 3 // Máquina Selecionou Tesoura
            ){printf("Você perdeu, a máquina escolheu Tesoura.\n");}

            else{printf("Você empatou, a máquina escolheu o mesmo que você.\n");}
            break;

        case 3: // Jogador Selecionou Tesoura
            if (escolhaMaquina == 1 // Maquina Selecionou Pedra
                ){printf("Você perdeu, a máquina escolheu Pedra.\n");}
            else if (escolhaMaquina = 2 // Máquina Selecionou Papel
            ){printf("Você ganhou, a máquina escolheu Papel.\n");}

            else{printf("Você empatou, a Máquina escolheu o mesmo que você.\n");}
            break;

        default:
            printf("Escolha invalida, selecione uma opção entre 1 e 3.\n");
            break;
    }
}