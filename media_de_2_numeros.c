#include <stdio.h>
int main()
{
    //Faça um programa que leia 2 números e imprima sua media
    float nota1,nota2;

    printf("Digite a primeira nota: ");
    scanf("%f",&nota2);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota1);

    printf("A media das notas e: %.2f\n\n\n",(nota1+nota2)/2);
    return 0;
}