#include <stdio.h>

int main(void)
{
    int con = 0, q;

    scanf("%d", &q);

    int n[q];

    for (int i = 0; i < q; i++)
    {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < q / 2; i++)
    {

        if (n[i] != n[q - i - 1])
        {
            con++;
        }
    }

    printf("\nq: %d", con);

    return 0;
}
