#include<stdio.h>
int main()
{
    //Faça um programa que calcule o preço da maça 
    int maca;
 
    printf("Digite a quantidade de maca: ");
    scanf("%d",&maca);

    if(maca >= 12)
    {   
        float p = maca * 1.1;
        printf("O preco da maca e: %f\n\n",p);
    }else{
        float p = maca * 1.3;
        printf("O preco da maca e: %f\n\n",p);
}

    
    return 0;
}