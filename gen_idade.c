#include <stdio.h>
int main()
{
    int q = 3,gen,quan_h =0 ;
    float alt[12], media, maior = 0;
    
    for(int i = 0;i < q;i++)
    {
        printf("Digite a sua altura: ");
        scanf("%f", &alt[i]);
        
        do{
            printf("Digite o seu sexo([1]Masculino [2]Feminino): ");
            scanf("%d", &gen);
        }while(gen < 1 || gen > 2);
        
        media += alt[i];
        
        if(maior < alt[i] && gen == 2)
        {
            maior = alt[i];
        }
        if(gen == 1)
        {
            quan_h++;
        }
    }
    printf("\nA maior altura das mulheres eh: %0.2f\nA Quantidade de homens eh: %d",maior, quan_h);
}
