#include <stdlib.h>
#include <stdio.h> // bilbioteca para o cls
#include <time.h> // bilbioteca para o _sleep

int main()
{
    system("color 0a");

    for(int k=0;k<24;k++) // Loop para horas
    {
        for(int j=0;j<60;j++) // Loop para minutis
        {
            for(int i=0;i<60;i++)// Loop para os minutos
            {
                _sleep(1000); // Delay para os segundos
                system("cls"); // Limpa o console a cada segundo
                if(j<10 && i<10)
                {
                    printf("%d : 0%d : 0%d",k,j,i);
                }else if(i < 10)
                {
                    printf("%d : %d : 0%d",k,j,i);
                
                }else if(j< 10)
                {
                    printf("%d : 0%d : %d",k,j,i);
                
                }else{
                    printf("%d : %d : %d",k,j,i);
                }
            }
        }
    }
    return 0;
}