#include <stdio.h>

int main()
{
    int q = 2, q2 = 3;
    float mat[q][q2],mat2[q][q2],mat3[q][q2];


    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < q2; j++)
        {
            printf("1 Elemento %d %d: ",i,j);
            scanf("%f", &mat[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < q2; j++)
        {   
            printf("2 Elemento %d %d: ",i,j);
            scanf("%f", &mat2[i][j]);
            mat3[i][j]=mat[i][j] + mat2[i][j];
        }
    }

    printf("\n");

    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < q2; j++)
        {
            printf("%0.2f ",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}