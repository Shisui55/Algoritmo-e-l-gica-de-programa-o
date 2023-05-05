#include <stdio.h>

int main()
{
    
    int M,m,array[5];
    
    for(int i = 0; i < 5; i++)
    {
        printf("Digite um numnero: ");
        scanf("%d",&array[i]);
    }

    M = array[0];
    m = array[0];

    for(int i = 0; i < 5; i++)
    {
       if(array[i] > M)
            {
                M = array[i];
            }
    }

    for(int i = 0; i < 5; i++)
    {
       if(array[i] < m)
            {
                m = array[i];
            }
    }

    printf("Maior eh: %d\n", M);
    printf("Menor eh: %d", m);
 }
