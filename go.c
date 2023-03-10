#include<stdio.h>

int main()
{
    //Calcule o volume de um cilinndro
    float temc,temf;
    
    printf("Digite a temperatura em celsius: ");
    scanf("%f",&temc);

    temf = temc * 1.8 + 32;

    printf("A temperatura em farenheit e: %.2f\n\n",temf);

    return 0;
}