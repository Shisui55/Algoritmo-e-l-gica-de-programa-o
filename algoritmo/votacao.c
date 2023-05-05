#include <stdio.h>

int main()
{
    //Faça um programa que mostre se você pode ou não votar
    int idade;
 
    printf("Digite a sua idade: ");
    scanf("%d",&idade);

    if(idade >= 16)
    {   
        printf("Voce podera votar esse ano" );
    }else{
        printf("Voce nao podera votar esse ano");
    }
    

    
    return 0;
}