#include <stdio.h>
int main()
{
    //Faça um programa que leia dois número e maior
    int num,num2;
    
    printf("Coloque um numero: ");
    scanf("%d",&num);

    printf("Coloque outro numero: ");
    scanf("%d",&num2);

    if(num > num2)
    {
        printf("O numero %d e maior que %d", num, num2);
    }else{
        printf("O numero %d e maior que %d", num2,num);
    }

    return 0;
}