#include<stdio.h>
int main()
{
    int num;
    
    do{
        printf("Digite um numero entre 1 e 7: ");
        scanf("%d",&num);

        if(num < 1 || num > 7)
        {
            printf("Nao ha dia da semana correspondente\nColoque um numero disponivel:\n");
        
        }else{
            switch(num)
            {
                case 1: printf("Domingo");
                break;
                
                case 2: printf("Segunda-feira");
                break;
                
                case 3: printf("Terca-feira");
                break;
                
                case 4: printf("Quarta-feira");
                break;
                
                case 5: printf("Quinta-feira");
                break;

                case 6: printf("Sexta-feira");                                        
                break;

                default: printf("Sabado");
                break;
                

            }
        }
    }while(num < 1 || num > 7);

    return 0;
}