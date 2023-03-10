#include <stdio.h>
int main()
{
    //Faça um programa que leia um número e indique se ele e par
    int num;
    
    printf("Coloque um numero: ");
    scanf("%d",&num);
    
    if(num%2==0)
    {
        printf("O numero e par");
    }else{
        printf("O numero e impar");
    }

    return 0;
}