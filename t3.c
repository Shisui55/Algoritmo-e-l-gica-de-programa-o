#include <stdio.h>

int main()
{
    int matricula = 1,quant_maior = 0;
    float sal,sal_maior = 0;        
    
    printf("\n\nDigite a matricula: ");
    scanf("%d",&matricula);

    while(matricula > 0)
    {        
        printf("Digite o salario: ");
        scanf("%f",&sal);

        if(sal > 1000)
        {
            quant_maior++;
        }
        
        if(sal > sal_maior)
        {
            sal_maior = sal;
        }

        printf("\n\nDigite a matricula: ");
        scanf("%d",&matricula);
        
    }

    printf("\nO maior salario eh: R$%0.2f",sal_maior);
    printf("\nA quantidade de pessoas que recebem mais que R$1000,00 eh: : %d",quant_maior);
    return 0;
}