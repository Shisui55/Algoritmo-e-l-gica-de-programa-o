#include <stdio.h>

int main(){

    float peso, altura, imc;

    printf("Dgite o  seu  peso:");
    scanf("%f", &peso);

    printf("Dgite a sua altura:: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 18.5){
        printf("Abaixo do peso");

    }else if( 18.5 <= imc  && imc <= 25){
        printf("Peso normal");

    }else if(25 < imc && imc < 30){
        printf("Acima do peso");
        
    }else{
        printf("Obeso");
    }

    return 0;
}