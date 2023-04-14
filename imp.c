#include<stdio.h>
int main()
{
    int sexo;
    float sal, imp;
    
    do{
        printf("[1]masculino\n[2]feminino\nDigite o seu sexo: ");
        scanf("%d",&sexo);
        
        if(sexo < 1 || sexo > 2)
        {
            printf("Valor nao cadastrado para sexo\n\n");
        }

        printf("Digite o seu salario: ");
        scanf("%f",&sal);

        if(sal <= 0)
        {
            printf("Digite um salario valido\n\n");
        }

        
        if(imp > 0 && (sexo >= 1 || sexo == 2)){
            switch(sexo)
            {
                case 1:
                    imp = sal * 0.12; 
                    printf("O valor do imposto eh: %0.2f",imp);
                break;
                
                case 2: 
                    imp = sal * 0.08;
                    printf("O valor do imposto eh: %0.2f",imp);
                break;
                
            }
        }
    }while(sexo < 1 || sexo > 2 || sal <= 0);

    return 0;
}