#include <stdio.h>
int main()
{
    int v,c1 = 0,c2=0,c3=0,nulo=0,branco=0,q=0;
    float pn,pb;
    do{
        
        printf("\nDigite:");
        scanf("%d",&v);
        if(v!=6)
        {
            q++;
        }
        if(v==1)
        {
            c1++;
        }else if(v == 2){
            c2++;
        }else if(v == 3){
            c3++;
        }else if(v == 4){
            nulo++;
        }else if(v == 5){
            branco++;
        }
        
    }while(v!=6);
    
    pb = branco  * 100 /q;
    pn = nulo  * 100/ q;

    printf("\nc1: %d\nc2: %d\nc3: %d \nVotos N: %0.2f\nVotos B: %0.2f",c1,c2,c3,pn,pb);
    
    if(c1 > c2 && c1 > c3)
    {
        printf("O Vencedor eh o cand. 1");
    }
    else if(c2 > c1 && c2 > c3)
    {
        printf("O Vencedor eh o cand. 2");
    }
    else if(c3 > c2 && c3 > c1)
    {
        printf("O Vencedor eh o cand. 3");
    }
    return 0;
}