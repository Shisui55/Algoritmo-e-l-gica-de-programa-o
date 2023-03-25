#include<stdio.h>
int main()
{
    //Faça um programa que ler o numero do planeta e o peso da  pessoa na terra e mostre o peso nesse planeta
    float PesoP,PesoT;
    int num;
    
    do{
    
        printf("Digite o peso da pessoa na terra: ");
        scanf("%f",&PesoT);
        
        printf("\n[1]MERCURIOO\n[2]VENUS\n[3]MARTE\n[4]JUPITER\n[5]SATURNO\n[6]URANO\n\nDigite o numero de algum dos planetas acima planeta: \n");
        scanf("%d",&num);

    
        switch (num)
        {
        case 1:
            PesoP = PesoT * 0.37;
            printf("O peso dessa pessoa no planeta MERCURIO eh de: %0.2f\n\n", PesoP);
            break;
            
        case 2:
            PesoP = PesoT * 0.88;
            printf("O peso dessa pessoa no planeta VENUS eh de: %0.2f\n\n", PesoP);
            break;

        case 3:
            PesoP = PesoT * 0.38;
            printf("O peso dessa pessoa no planeta MARTE eh de: %0.2f\n\n", PesoP);
            break;
    
        case 4:
            PesoP = PesoT * 2.64;
            printf("O peso dessa pessoa no planeta JUPITER eh de: %0.2f\n\n", PesoP);
            break;

        case 5:        
            PesoP = PesoT * 1.15;
            printf("O peso dessa pessoa no planeta SATURNO eh de: %0.2f\n\n", PesoP);
            break;

        case 6:        
            PesoP = PesoT * 1.17;
            printf("O peso dessa pessoa no planeta URANO eh de: %0.2f\n\n", PesoP);
            break;

        }

    }while(num < 1  ||  num  > 6  );
    
    return 0;
}