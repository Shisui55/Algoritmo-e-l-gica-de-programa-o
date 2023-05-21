#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, nf, mf, m;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    n1 *= 2;
    n2 *= 3;
    n3 *= 4;
    m = (n1 + n2 + n3 + n4) / 10;

    if (m >= 7)
    {
        printf("Media: %.1f\n", m);
        printf("Aluno aprovado.");}
    else if (m >= 5)
    {
        scanf("%f", &nf);
        mf = m / 2 + nf / 2;

        printf("Media: %.1f\n", m);
        printf("Aluno em exame.");

        if (mf >= 5.0)
        {
            printf("\nNota do exame: %.1f", nf);
            printf("\nAluno aprovado.");
            printf("\nMedia final: %.1f\n", mf);
        }
        else
        {
            printf("\nNota do exame: %.1f", nf);
            printf("\nAluno reprovado.");
            printf("\nMedia final: %.1f\n", mf);
        }
    }
    else
    {
        printf("Media: %.1f\n", m);
        printf("Aluno reprovado.\n");
    }
    return 0;
}
