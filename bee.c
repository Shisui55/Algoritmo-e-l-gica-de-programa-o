#include <stdio.h>

int main()
{
    int q =3,aux,num[q],num2[q];
    
    // Loop para ler os numeros
    for(int i=0; i<q ;i++)
    {
        scanf("%d",&num[i]);
        num2[i] = num[i];
    }
    
    // Loop para ordenar os numeros
    for(int i=0; i < q;i++)
    {
        for(int j=0; j < q;j++)
        {
            if(num[i] < num[j])
            {
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }

    // Loop para imprimir os numeros ordenados
    for(int i=0; i<q ;i++)
    {
        printf("%d\n",num[i]);
    }
    printf("\n");
    // Loop para mostrar os numeros na ordem em que foram lidos
    for(int f = 0; f<q;f++)
    {
        printf("%d\n",num2[f]);
    }
    return 0;
}