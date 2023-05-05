#include <stdio.h>

int main()
{
    //Faça um programa que leia a matricula, 2 notas e mostre a media e se foi aprovado

    
    int matricula;
    float nota1,nota2, media;
 
    printf("Digite a sua matricula: ");
    scanf("%d",&matricula);

    printf("Digite a sua nota 1: ");
    scanf("%f",&nota1);

    printf("Digite a sua nota 2: ");
    scanf("%f",&nota2);
    
    media = (nota2 + nota1)/2;

    if(media >= 6)
    {   
        printf("O aluno da matricula %d \nCom media de: %f \nfoi aprovado", matricula, media );

    }else if(media >= 4 && media < 6){
        printf("O aluno da matricula %d \nCom media de: %f \nfoi para o conselho", matricula, media );

    }else{
        printf("O aluno da matricula %d \nCom media de: %f \nfoi reprovado", matricula, media );
    }
    
    return 0;
}