#include <stdio.h>

int main() {
    float var1;
    float var2;
    float var3;
    float var4;
    float mean;

    printf("Digite a primeira nota:\n");
    scanf("%f", &var1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &var2);

    printf("Digite a terceira nota:\n");
    scanf("%f", &var3);

    printf("Digite a quarta nota:\n");
    scanf("%f", &var4);

    mean = (var1 + var2 + var3 + var4) / 4;

    printf("A média entre as notas é: %.2f\n", mean);

    return 0;
}
