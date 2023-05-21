#include<stdio.h>

int main()
{
    
    //Leia as medidas do triangulo e calcule a sua área
    
    float altura,largura,area;

    printf("Digite a altura: ");
    scanf("%f",&altura);
    printf("Digite a largura: ");
    scanf("%f",&largura);

    area = (altura * largura) / 2;
    
    printf("A area do triangulo e: %.2f\n\n",area);
    
    return 0;
}