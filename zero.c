#include <stdio.h>
int main()
{
    //Faça um programa que leia um número e indique se é igual a zero
    int num;
    
    printf("Coloque um numero: ");
    scanf("%d",&num);
    
    if(num == 0)
    {
        printf("O numero e igual a zero");
    }else{
        printf("O numero nao e igual a zero");
    }

    return 0;
}