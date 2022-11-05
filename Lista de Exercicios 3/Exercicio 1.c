#include <stdio.h>
#include <locale.h>

int main(){

    int valores[10], negativos[10];
    int i, media, soma = 0, neg = 0;

    setlocale(LC_ALL, "Portuguese");

    for(i = 0; i<10; i++){

        printf("Incira um valor inteiro: ");
        scanf("%d", &valores[i]);
        
        if(valores[i] <= 0){

            negativos[neg] = valores[i];
            neg++;

            soma = valores[i] + soma;
        }

        if((i == 9) && (valores[i] >= 0)){

            printf("\nNão houve valores negativos");
            return 0;
        }
    }

    media = soma / neg;

    printf("\n\n----------------------Numeros Negativos------------------------\n");

    for(i = 0; i<neg; i++){
        
        printf("1. %d\n", negativos[i]);
    }

    printf("\n\n--------------------Media dos Negativos------------------------\n");

    printf("Media: %d", media);

    return 0;

}