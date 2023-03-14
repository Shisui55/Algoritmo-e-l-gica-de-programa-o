#include<stdio.h>
int main()
{
    //Faça um programa que mostre se ele é positivo, negativo ou neutro
    int num;
 
    printf("Digite o numero: ");
    scanf("%d",&num);

    if(num > 0)
    {   
        printf("O numero eh positivo");

    }else if(num == 0)
    {
        printf("O numero eh nulo");
    
    }else
    {
        printf("O numero eh negativo");
    }
    

    
    return 0;
}