#include <stdio.h>
#include <stdlib.h> // biblioteca para usar a função system()


int main()
{
    
    char rep = 's';

    while(rep == 's' ){
        int q = 0;
        float num = 1, media =0, soma = 0; 

        system("cls");
        printf("--------------------------------\n");
        printf("             Media              \n");
        printf("--------------------------------\n\n\n");
        
        system("color 0f");

        printf("Digite:");
        scanf("%f", &num);
        
        if(num <= 0)
        {   
            while(num <= 0)
            {
                system("color 0c"); // Muda a cor da fonte para vermelho
                if(num >0)
                {
                    soma += num;
                    q++;
                }
                printf("\nDigite um numero valido:");
                scanf("%f", &num);
            }
            while(num > 0)
            {
                soma += num;
                q++;
                system("color 0f"); // Muda a cor da fonte para branco
                printf("\nDigite um numero: ");
                scanf("%f", &num);
            }
        }else{
            while(num > 0)
            {
                soma += num;
                q++;
                printf("\nDigite outro numero:");
                scanf("%f", &num);
            }
        }
        system("cls"); // Limpa o console
        media = soma/q;    

        system("color 0a"); // Muda a cor da fonte para verde claro
        printf("A media eh: %0.2f\n\n", media);

        printf("Deseja calcular a media novamente?[s/n]\n");
        scanf("%s", &rep);
    }
    return 0;
}
