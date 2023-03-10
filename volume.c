#include<stdio.h>

int main()
{
    //Calcule o volume de um cilinndro
    float raio,altura,pi,volume;
    
    printf("Digite a medida do raio: ");
    scanf("%f",&raio);

    printf("Digite a medida da altura: ");
    scanf("%f",&altura);

    printf("Digite a medida de pi: ");
    scanf("%f",&pi);

    volume = altura*raio*raio*pi;
    printf("O volume do cilindro e: %.2f\n\n",volume);

    return 0;
}