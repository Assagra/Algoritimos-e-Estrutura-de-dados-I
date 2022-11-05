#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num[10], impar[10];
    int i, imp = 0, soma = 0;
    float media;

    for(i = 0; i<10; i++){

        printf("Incira um valor inteiro e maior que zero: ");
        scanf("%d", &num[i]);

        if(num[i] <= 0){

            printf("\nValor invalido\n");
            i--;

        }else if(num[i] % 2 != 0){

            impar[imp] = num[i];
            imp++;

        }

    }

    for(i = 0; i<imp; i++){

        soma = soma + impar[i];

        if(i == imp - 1){

            media = soma / imp;

        }

    }

    printf("\n\n--------------------------------Valores inseridos-----------------------------------\n");

    for(i = 0; i<10; i++){

        printf("%d. %d\n", i, num[i]);

    }

    printf("\n\n------------------------------Media dos impares------------------------------------\n");

    printf("media: %.1f\n", media);

    return 0;

}