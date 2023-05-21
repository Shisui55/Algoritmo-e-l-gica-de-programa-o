#include <stdio.h>
int main()
{   
    int operacao;
    float num1,num2;
    
    printf("Digite o primeiro numero: ");
    scanf("%f",&num1);

    printf("\nDigite o segundo numero: ");
    scanf("%f",&num2);

    printf("\nDessas operacoes:\n[1]Adicao\n[2]Subtracao\n[3]Multiplicacao\n[4]Divisao\nEscolha uma: ");
    scanf("%d",&operacao);

    switch (operacao)
    {
    case 1:
        printf("\nO resultado eh: %f\n\n",num1 + num2);
        break;
    
    case 2:
        printf("\nO resultado eh: %f\n\n",num1 - num2);
        break;
    
    case 3:
        printf("\nO resultado eh: %f\n\n",num1 * num2);
        break;
    
    case 4:
        printf("\nO resultado eh: %f\n\n",num1 / num2);
        break;
    
    default:
        printf("\nTipo de operacao invalida\n\n");
        break;
    }
    return 0;

}