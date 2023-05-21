#include <stdio.h>

int main()
{
    //Faça um programa que leia a quantidade de pontos marcado pelo interporto FC e palmas FC e
    //Imprima o vencedor ou se deu empate

    
    int porto, palmas, vencedor;
 
    printf("Digite o numero de gols marcado pelo interporto FC: ");
    scanf("%d",&porto);

    printf("Digite o numero de gols marcado pelo palmas FC: ");
    scanf("%d",&palmas);
    
    vencedor = porto - palmas;

    if(vencedor > 0)
    {   
        printf("O vencedor eh o interporto FC" );

    }else if(vencedor < 0){
        printf("O vencedor eh o palmas FC" );

    }else{
        printf("A partida deu empate\n");
    }
    
    return 0;
}