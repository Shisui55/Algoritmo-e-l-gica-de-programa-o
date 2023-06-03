#include <stdio.h>

int main()
{
    int ano, mes, dia;
    int ano2, mes2, dia2;
    int anof, mesf, diaf;
    int aux;

    printf("Ano 1: ");
    scanf("%d", &ano);

    do
    {
        printf("\nmes 1: ");
        scanf("%d", &mes);

    } while (mes >= 13 || mes <= -1);

    do
    {
        printf("\ndia 1: ");
        scanf("%d", &dia);
    } while (dia >= 32 || dia <= -1);

        printf("\n\nAno 2: ");
        scanf("%d", &ano2);

    do
    {
        printf("\nmes 2: ");
        scanf("%d", &mes2);

    } while (mes2 >= 13 || mes2 <= -1);

    do
    {
        printf("\ndia 2: ");
        scanf("%d", &dia2);

    } while (dia2 >= 32 || dia2 <= -1);

    do
    {
        if (ano < ano2)
        {
            aux = ano;
            ano = ano2;
            ano2 = aux;

            aux = mes;
            mes = mes2;
            mes2 = aux;

            aux = dia;
            dia = dia2;
            dia2 = aux;
        }
        if (mes < mes2)
        {
            ano--;
            mes += 12;
        }

        if (dia < dia2)
        {
            mes--;
            if (mes % 12 == 1 || mes % 12 == 3 || mes % 12 == 5 || mes % 12 == 7 || mes % 12 == 8 || mes % 12 == 10 || mes % 12 == 12)
            {
                dia += 31;
            }
            else if (mes % 12 == 4 || mes % 12 == 6 || mes % 12 == 11 || mes % 12 == 9)
            {
                dia += 31;
            }
            else if (ano % 4 == 0)
            {
                dia += 28;
            }
            else
            {
                dia += 29;
            }
        }

        anof = ano - ano2;
        mesf = mes - mes2;
        diaf = dia - dia2;

        if (diaf >= 30)
        {
            diaf %= 30;
            mes++;
        }

    } while (ano < ano2 || mes < mes2 || dia < dia2);

    printf("\nA diferenca entre esse datas eh de: %d ano (s) %d mes (es) %d dia (s)", anof, mesf, diaf);
    return 0;
}