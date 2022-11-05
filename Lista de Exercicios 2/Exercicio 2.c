/*
	Name: Exercicio 2
	Author: Lucas Assagra
	Date: 11/05/22 13:29
	Description: Soma dos valores pares array
*/


#include <locale.h>
#include <stdio.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num[10];
    int i, soma = 0;

    for(i = 0; i < 10; i++){

        printf("Insira um valor inteiro e maior que zero: ");
        scanf("%d", &num[i]);

        if(num[i] <= 0){
            
            printf("\nValor invalido\n");
            i--;
            continue;

        }else if(num[i] % 2 == 0){

            soma = soma + num[i];

        }

    }

    printf("\n\n------------------Valores inseridos------------------------\n");

    for(i = 0; i < 10; i++){

        printf("%d. %d\n", i, num[i]);

    }

    printf("\n\n------------------Soma dos pares---------------------------\n");

        printf("Soma dos valores: %d", soma);

    return 0;

}