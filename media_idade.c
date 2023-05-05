#include <stdio.h>

int main()
{
    int num[12],q = 20;
    float media;
    
    for(int i = 0;i < q;i++)
    {
        printf("Digite a sua idade: ");
        scanf("%d", &num[i]);
    
        media += num[i];
    
    }
    printf("A media eh: %0.3f",media/q);
}
