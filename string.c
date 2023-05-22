#include <stdio.h>
#include <string.h>

int main()
{

    char os[20], tipo[20], ali[20];

    scanf("%s", os);
    scanf("%s", tipo);
    scanf("%s", ali);

    if (strcmp(os, "vertebrado") == 0)
    {
        if (strcmp(tipo, "ave") == 0)
        {
            if (strcmp(ali, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            if (strcmp(ali, "onivoro") == 0)
            {
                printf("pomba\n");
            }
        }
        if (strcmp(tipo, "mamifero") == 0)
        {
            if (strcmp(ali, "onivoro") == 0)
            {
                printf("homem\n");
            }
            if (strcmp(ali, "herbivoro") == 0)
            {
                printf("vaca\n");
            }
        }
    }
    else if (strcmp(os, "invertebrado") == 0)
    {
        if (strcmp(tipo, "inseto\n") == 0)
        {
            if (strcmp(ali, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            if (strcmp(ali, "herbivoro") == 0)
            {
                printf("lagarta\n");
            }
        }
        if (strcmp(tipo, "anelideo") == 0)
        {
            if (strcmp(ali, "hematofago") == 0)
            {
                printf("sansguessuga\n");
            }
            if (strcmp(ali, "onivoro") == 0)
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
