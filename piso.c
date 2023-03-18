#include <stdio.h>

int main(){
    // Faça um programa que leia as medidas de uma sala -
    // comprimento e largura (em metros) –, além do preço do metro quadrado do
    // carpete. Calcule e escreva qual o custo total para forrar o piso da sala.*/

    float comprimento, largura, custo, preco;

    printf("Qual o comprimento da sala:\n");
    scanf("%f", &comprimento);

    printf("Qual a largura da sala: \n");
    scanf("%f", &largura);

    printf("Qual o preçço por metro quadrado: \n");
    scanf("%f", &custo);

    preco =  comprimento * largura * custo;

    printf("O preco para forrar o piso sera de R$ %.2f\n\n\n", preco);

    return 0;
}