#include <stdio.h>

int main()
{
    float sal, per1 = 0, per2 = 0, per3 = 0, per_f;
    float c1, c2, sal_n_is;

    c1 = 3000.01;
    c2 = 4500.00;

    scanf("%f", &sal);

    sal_n_is = sal - 2000;

    if (sal_n_is <= 0)
    {
        printf("Isento\n");
    }
    else if (sal >= 2000.01)
    {

        if (sal >= c2)
        {
            per3 = (sal_n_is - 2500) * 0.28;
            per1 = 1000 * 0.08;
            per2 = 1500 * 0.18;
        }
        else if (sal < c2 && sal >= c1)
        {
            per2 = (sal_n_is - 1000) * 0.18;
            per1 = 1000 * 0.08;
        }
        else
        {
            per1 = sal_n_is * 0.08;
        }

        per_f = per1 + per2 + per3;
        printf("R$ %0.2f\n", per_f);
    }
    return 0;
}
