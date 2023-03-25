#include <stdio.h>

int main()
{
    int a,b,c,d,e,men,mai;
    printf("Digite: ");
    scanf("%d%d%d%d%d",a,b,c,d,e);
    
    
    if(a > b && a > c && a > d && a > e)
    {
        mai = a;
    }
    if(b > a && b > c && b > d && b > e)
    {
        mai = b;
    }
    if(c> b && c> a && c> d && c> e)
    {
        mai = c;
    }
    if(d > a && d > c && d > b && d > e)
    {
        mai = d;
    }
    if(e > a && e > c && e > b && e > d)
    {
        mai = e;
    }
    
    if(a < b && a < c && a < d && a < e)
    {
        men = a;
    }
    if(b < a && b < c && b < d && b < e)
    {
        men = b;
    }
    if(c< b && c< a && c< d && c< e)
    {
        men = c;
    }
    if(d < a && d < c && d < b && d < e)
    {
        men = d;
    }
    if(e < a && e < c && e < b && e < d)
    {
        men = e;
    }

    printf("o maior numero eh: %d\nE o menor eh: ",mai,men);

    return 0;
}
