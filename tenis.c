#include <stdio.h>

int main(void)
{
    int n[4], maior = 0, seg = 0,dif,pos;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        if (n[i] >= maior)
        {
            maior = n[i];
            pos = i;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (n[i] >= seg && i != pos)
        {
            seg = n[i];
        }
    }

    dif = maior -seg;

    printf("\n\nMaior: %d\nSegundo maior: %d\nDiferenca: %d",maior,seg,dif);
    return 0;
}
