#include <stdio.h>

int main()
{
    //Faça um programa que calcule o peso ideal de acordo com o sexo
    float ideal, altura;
    int sexo;
 
    printf("Digite a sexo [1: masculino| 2 : feminino]: ");
    scanf("%d",&sexo);

    printf("Digite a sua altura: ");
    scanf("%f",&altura);

    if(sexo == 1)
    {   
        ideal = (72.1*altura) - 58;
        printf("O peso ideal eh: %f\n\n",ideal);
    }else if(sexo == 2){
        ideal = (62.1*altura) - 44.7;
        printf("O peso ideal eh: %f\n\n",ideal);
    }
    
    return 0;
}