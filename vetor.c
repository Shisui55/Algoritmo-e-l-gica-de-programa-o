#include <stdio.h>

int main()
{
    
    int num[5], menor; 
    int maior = 0;
    int media = 0;
    
    //laço para ler o número
    for(int i=0; i < 5; i++)
    {
        scanf("%d",&num[i]);
    }
    
    //laço para emprimir o número
    for(int i=0; i < 5; i++)
    {
        printf("\n\nO numero na posicao %d e: %d\n",i, num[i]);
    }
    
    //laço para verificar qual numero dado é maior
    for(int i=0; i < 5; i++)
    {
        if(num[i] > maior)
        {
            maior = num[i];
        }
    }
    printf("\n\nO maior numero e: %d\n",maior);
    
    //laço para verificar qual dos número dados é menor
    menor = maior;
    for(int i=0; i < 5; i++)
    {
        if(num[i] < menor)
        {
            menor = num[i];
        }
    }
    printf("\n\nO menor numero e: %d\n",menor);
    
    //laço para verificar qual a media dos números dados é menor
    for(int i=0; i < 5; i++)
    {
        media += num[i];
    }
    printf("\n\nA media dos numeros e: %d\n\n\n",media/5);
    
    return 0;
}
