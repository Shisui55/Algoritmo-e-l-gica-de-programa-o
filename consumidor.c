#include <stdio.h>

int main()
{
    //Faça um programa que leia o código e mostre o tipo de consumidor
    
    int codigo;
    float consumo;
    inicio:
    printf("Digite o codigo: ");
    scanf("%d",&codigo);

    printf("Digite o consumo mensal em Kwh: ");
    scanf("%f",&consumo);

    if(codigo == 1)
    {   
        consumo *= 0.98;
        printf("O consumidor eh do tipo: residencial\n" );
        printf("O valor do consumo foi de: %0.2f\n", consumo );

    }else if(codigo == 2){
        consumo *= 1.12;
        printf("O consumidor eh do tipo: comercial\n" );
        printf("O valor do consumo foi de: %0.2f\n", consumo );

    }else if(codigo == 3){
        consumo *= 1.15;
        printf("O consumidor eh do tipo: iondustrial\n");
        printf("O valor do consumo foi de: %0.2f\n", consumo );
    }
    
    goto inicio;
    return 0;
}