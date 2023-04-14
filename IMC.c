#include<stdio.h>
int main()
{
    int sexo;
    float alt, peso;
    
    do{
        printf("[1]masculino\n[2]feminino\nDigite o seu sexo: ");
        scanf("%d",&sexo);

        printf("Digite a sua altura: ");
        scanf("%f",&alt);

        if(alt <= 0)
        {
            printf("Digite uma altura válida:\n");
        }

        if(sexo < 1 || sexo > 2)
        {
            printf("Digite uma altura válida:\n");
        
        }else{
            switch(sexo)
            {
                case 1:
                    peso = (72.2 * alt) - 58; 
                    printf("O peso ideal para essa altura eh: %0.2f",peso);
                break;
                
                case 2: 
                    peso = (62.1 * alt) - 58;
                    printf("O peso ideal para essa altura eh: %0.2f",peso);
                break;
                
            }
        }
    }while(sexo < 1 || sexo > 2 || alt <= 0);

    return 0;
}