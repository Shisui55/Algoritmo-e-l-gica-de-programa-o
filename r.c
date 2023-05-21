#include <stdio.h>
int main()
{
    double a,b,c,area,per,aux;
    scanf("%lf %lf %lf",&a,&b,&c);

    if(b > a && b>c)
    {
        aux = b;
        b = a;
        a = aux;
        if(c > b)
        {
            aux = c;
            c = b;
            b =c;
        }
    }
     if(c > a && c>b)
    {
        aux = c;
        c = a;
        a = aux;
        if(c > b)
        {
            aux = c;
            c = b;
            b =aux;
        }
    }
    else if(a > b && b < c)
    {
        aux = b;
        b = c;
        c = aux;
    }

    if(a<(b+c))
    {
        per = a+b+c;
        printf("Perimetro = %0.1f",per);

    }else{
        float area = ((a+b)*c)/2;
        printf("Area = %0.1f",area);
    }


    return 0;
}
