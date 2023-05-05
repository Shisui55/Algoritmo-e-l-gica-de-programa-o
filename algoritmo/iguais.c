#include<stdio.h>
int main()
{
    //Faça um programa que mostre se os numeros são iguais ou um é maior que o outro
    float num, num1;

    printf("Digite o numero: ");
    scanf("%f",&num);

    printf("Digite outro numero: ");
    scanf("%f",&num1);
    
    if(num > num1)
    {   
        printf("O numero %f eh maior do que %f\n", num,num1);

    }else if(num1 > num)
    {
        printf("O numero %f eh maior do que %f\n", num1,num);
    
    }else
    {
        printf("Os numeros sao iguais\n");
    }

    
    return 0;
}