/*
	Name: Exercicio 4
	Author: Lucas Assagra
	Date: 11/05/22 17:44
	Description: Media entre o menor e o maior
*/


#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num[10];
    int i, maior, menor, ma, me;
    float media, soma = 0;


    for(i = 0; i<10; i++){

        printf("Insira um valor inteiro e maior que zero: ");
        scanf("%d", &num[i]);

        if(num[i] <= 0){

            printf("\nValor invalido\n");
            i--;

        }

        if( i == 0){

            menor = num[i];

        }

        if(num[i] > maior){

            maior = num[i];
            ma = i;

        }else if(num[i] < menor){

            menor = num[i];
            me = i;

        }
    }




    for(i = 0; i<10; i++){

        if( (i == ma) || (i == me) ){

            continue;

        }else{

            soma = soma + num[i];
            
        }

    }

    media = soma / 8;

    printf("\n\n---------------------------------Valores Entrados-----------------------------------\n");

    for(i = 0; i<10; i++){

        printf("%d. %d\n", i, num[i]);

    }

    printf("\n\n--------------------------------Media entre o maior e o menor----------------------\n");

    printf("%.1f", media);

    return 0;

}
