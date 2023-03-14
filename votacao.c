#include <stdio.h>

int main()
{
    //Faça um programa que calcule o peso ideal de acordo com o sexo

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