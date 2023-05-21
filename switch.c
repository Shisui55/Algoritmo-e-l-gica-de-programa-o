#include<stdio.h>
int main()
{
    //Faça um programa que ler o código e mostre o produto
    int cod;
 
    printf("Digite o numero: ");
    scanf("%d",&cod);
    
    switch (cod)
    {
    case 1:
        printf("VESTUARIO");
        break;

    case 2:
        printf("PRODUTO DE LIMPEZA");
        break;

    case 3:
        printf("ALIMENTO PERECIVEL");
        break;
   
    case 4:
        printf("ALIMENTO NAO PERECIVEL");
        break;

    default:        
        printf("NUMERO NAO CLASSIFICADO");
    }
    
    
    return 0;
}