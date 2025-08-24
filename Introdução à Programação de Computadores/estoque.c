#include <stdio.h>

int main(){
    unsigned int estoque, e_min;
    float umidade, u_min, u_max, temperatura, t_min, t_max;

    // Estoque Mínimo
    e_min = 3;

    // Range de Segurança Umidade
    u_min = 20; // 20%
    u_max = 50; // 50%

    // Range de Segurança para Temperatura
    t_min = 10; // 10°C
    t_max = 35; // 35°C

    printf("Forneça a temperatura no estoque: \n");
    scanf("%f", &temperatura);

    printf("Forneça a umidade no estoque: \n");
    scanf("%f", &umidade);

    printf("Forneça o número de estoque: \n");
    scanf("%u", &estoque);

    // Verificando a Temperatura no Estoque
    if (!(temperatura >= t_min && temperatura <= t_max)){printf("A temperatura (%.2f °c) está fora do intervalo de segurança (%.2f, %.2f)\n", temperatura, t_min, t_max);}

    // Verificando a Umidade no Estoque
    if (!(umidade >= u_min && umidade <= u_max)){printf("A umidade (%.2f %) está fora do intervalo de segurança (%.2f, %.2f)\n", umidade, u_min, u_max);}

    // Verificando o Estoque
    if (estoque < e_min){printf("O estoque (%.2u itens) está abaixo do nível minimo de %.2u itens\n", estoque, e_min);}


}