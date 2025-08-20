#include <stdio.h>

int main(){
    int idade;
    char nome[20];

    printf("Digite o seu nome\n");
    scanf("%s", nome);  // notação: scanf(type_var1, %var1)

    printf("Digite a sua idade\n");
    scanf("%i", &idade);  // notação: scanf(type_var2, %var2)

    printf("n\nOs dados gerados foram:\nNome: %s\nIdade: %i\n", nome, idade);
}