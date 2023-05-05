#include <stdio.h>
int main()
{
    int q = 3,gen,q_m = 0;
    float alt[12], media, maior = 0, menor = 5; 
    float alt_g = 0,alt_m;
    
    for(int i = 0;i < q;i++)
    {
        printf("Digite a sua altura: ");
        scanf("%f", &alt[i]);
        
        do{
            printf("Digite o seu sexo([1]Masculino [2]Feminino): ");
            scanf("%d", &gen);
        }while(gen < 1 || gen > 2);
        
        media += alt[i];
        
        // Maior altura
        if(maior < alt[i])
        {
            maior = alt[i];
        }
        
        // Menor altura
        if(menor > alt[i])
        {
            menor = alt[i];
        }
        
        // Media de altura das mulheres
        if(gen == 2)
        {
            alt_m += alt[i];
            q_m++;
        }
        
        // Media de altura dos grupos
        alt_g+= alt[i];
        
    }
    printf("\nA maior altura das mulheres eh: %0.2f\nA menor altura eh: %0.2f",maior, menor);
    printf("\nA media de altura das mulheres eh: %0.2f\nA media de altura do grupo eh: %0.2f",alt_m/q_m, alt_g/q);
}
