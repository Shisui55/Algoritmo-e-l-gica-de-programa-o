#include <stdio.h>

int main()
{
    int des[5][5],j,i,q=5,q2=5,q3=0;

    for (int i = 0; i < q; i++)
    {
        for ( j = 0; j < q2; j++)
        {
            printf("1 Elemento %d %d: ",i,j);
            scanf("%d", &des[i][j]);
        }
    }

    for(i=1;i<5;i++)
    {
        q3++;
        for(int j=0;j<q3;j++)
        {
            printf("\n%d",des[i][j]);
        }
    }
    
    return 0;
}