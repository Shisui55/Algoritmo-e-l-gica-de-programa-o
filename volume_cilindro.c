#include<stdio.h>
int main()
{
    //Faça um programa que calcule o volume de um cilindro
    float raio,altura,pi,volume;
 
    printf("Digite o valor do raio: ");
    scanf("%f",&raio);

    printf("Digite o valor da altura: ");
    scanf("%f",&altura);

    printf("Digite o valor de pi: ");
    scanf("%f",&pi);
    volume = pi* raio * raio * altura;

    printf("O volume do cilindro e: %.2f\n\n",volume);
    return 0;
}