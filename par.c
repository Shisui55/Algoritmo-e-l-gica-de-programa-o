#include <stdio.h>
int main()
{
    //Faça um programa que leia um número e indique se ele e par
    int num;
    
    printf("Coloque um numero: ");
    scanf("%d",&num);
    
    //condicional para verificar se o resto da divisão do número é 2
    if(num%2==0)
    {
        printf("O numero %d e par", num);
    }else{
        printf("O numero %d e impar", num);
    }

    return 0;
}