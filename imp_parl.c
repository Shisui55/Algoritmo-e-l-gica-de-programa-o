#include <stdio.h>

int main()
{
    int imp,pares,num[12],f;
    
    for(int i = 0;i < 12;i++)
    {
        printf("Digite um numero intero: ");
        scanf("%d", &num[i]);
    
        if(num[i] % 2 == 0)
        {
            pares++;
        }else{
            imp++;
        }
    }
    
    printf("Numeros pares: %d\nNumeros impares: %d", pares,imp);
    
    for(int f = 0;f < 12;f++)
    {
        printf("\nO numero na poosicao %d eh: %d",f,num[f]);
    }
    return 0;
}
