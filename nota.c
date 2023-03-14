#include <stdio.h>

int main()
{
    //Faça um programa que calcule o peso ideal de acordo com o sexo

    int matricula,nota1,nota2, media;
 
    printf("Digite a sua matricula: ");
    scanf("%d",&matricula);

    printf("Digite a sua nota1: ");
    scanf("%d",&nota1);

    printf("Digite a sua nota 2: ");
    scanf("%d",&nota2);
    
    media = (nota1 + nota1)/2;

    if(media >= 6)
    {   
        printf("o aluno da matricula %d \nCom media de: %d \nfoi aprovado", matricula, media );
    }else{
        printf("o aluno da matricula %d \nCom media de: %d \nfoi reprovado", matricula, media );
    }
    

    
    return 0;
}