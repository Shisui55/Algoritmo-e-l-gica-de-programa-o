#include <stdio.h>
int main()
{
    //Faça um programa que leia um número e imprima o seu dobro 
    float num,dobro;
    
    printf("Coloque um numero: ");
    scanf("%f",&num);
    
    //%0.2f - defina a quantiade de números decimais
    dobro = num * 2;
    printf("O dobro desse numero e: %.2f \n\n",dobro);
    
    return 0;
}