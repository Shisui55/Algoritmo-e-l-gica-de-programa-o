#include<stdio.h>
int main()
{
    //Faça um programa que transforme reais em dólar
    float reais,cotacao,redo;
 
    printf("Digite em reais: ");
    scanf("%f",&reais);

    printf("Digite o valor da cotacao do dolar: ");
    scanf("%f",&cotacao);

    redo = reais / cotacao;

    printf("O valor e, dolares eh: %.2f\n\n",redo);
    return 0;
}