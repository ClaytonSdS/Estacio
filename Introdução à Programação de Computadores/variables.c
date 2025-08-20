#include <stdio.h>

int main(){
    int idade = 26;
    int qtd = 0; // Quantidade
    char letra = 'a';
    char nome[20] = "Clayton";
    float altura = 1.70;
    double peso = 50; // Double -> armazena mais valores de ponto flutuante, quando comparada com tipo 'float'

    // Utilizando de Printf para diferentes saidas de dados.

    printf("Informações:\n");
    printf("Nome: %s \n", nome);
    printf("Idade: %i\n", idade);
    printf("Altura: %f Peso: %f \n", altura, peso);

}