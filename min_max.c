#include <stdio.h>

int main()
{
    int compara, a, b, s[5], n = 0, p = 0, maior = 0, menor = 10001;

    // Lê os numeros
    scanf("%d %d %d", &compara, &a, &b);

    int ns[b];

    for (int i = a; i < b; i++)
    {

        // Separa os numeros em digitos
        s[0] = i / 10000;
        s[1] = i / 1000;
        s[2] = i / 100;
        s[3] = i / 10;
        s[4] = i / 1;

        // Soma os  digitos
        for (int j = 0; j < 5; j++)
        {
            n += s[i];
        }

        // armazena os numeros
        if (n == compara)
        {
            ns[p] = s[i];
        }
    }

    // Atribui o maior e o menor
    for (int i = 0; i < b; i++)
    {
        if (ns[i] > maior)
        {
            maior = ns[i];
        }

        if (ns[i] < menor)
        {
            menor = ns[i];
        }
    }
    printf("\nMaior: %d\nMenor: %d", maior, menor);

    return 0;
}
