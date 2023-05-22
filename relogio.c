#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    system("color 0a");

    for(int k=0;k<24;k++)
    {
        for(int j=0;j<60;j++)
        {
            for(int i=0;i<60;i++)
            {
                // _sleep(1000);
                system("cls");
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