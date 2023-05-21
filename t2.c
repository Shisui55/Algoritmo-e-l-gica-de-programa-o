#include <stdio.h>
int main()
{
    int q = 50,gen,quantidade_mulheres = 0;
    float alt[q], alt_grupo = 0, maior = 0, menor = 5; 
    float media_grupo,altura_mulheres,media_mulheres = 0;
    
    for(int i = 0;i < q;i++)
    {
        do{    
            printf("Digite a sua altura em metros: ");
            scanf("%f", &alt[i]);
        }while(alt[i]<=0);

        do{
            printf("Digite o seu sexo([1]Masculino [2]Feminino): ");
            scanf("%d", &gen);
        }while(gen < 1 || gen > 2);
        
        alt_grupo += alt[i];

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
            altura_mulheres += alt[i];
            quantidade_mulheres++;
        }
    }
    media_grupo = alt_grupo / q; // Media de altura dos grupos
    
    if(quantidade_mulheres > 0){
        media_mulheres= altura_mulheres/quantidade_mulheres;
    }

    printf("\nA maior altura da turma eh: %0.2fm",maior);
    printf("\nA menor altura da turma eh: %0.2fm", menor);
    printf("\nA media de altura das mulheres eh: %0.2fm",media_mulheres);
    printf("\nA media de altura do grupo eh: %0.2fm",media_grupo);
    return 0;
}
