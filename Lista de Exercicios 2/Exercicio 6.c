#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int lista1[10], lista2[10], diferen[20];
    int i, j, diff = 0;


    printf("\n\n----------------------------------Lista 1---------------------------------\n");

    for(i = 0; i<10; i++){

        printf("lista 1 - Insira um valor inteiro e maior que zero: ");
        scanf("%d", &lista1[i]);

        if(lista1[i] <= 0){

            printf("\nValor Incorreto, Insira um novo valor: ");
            scanf("%d", &lista1[i]);
        }
    }

    printf("\n\n-----------------------------------lista 2----------------------------------\n");

    for(i = 0; i<10; i++){

        printf("lista 2 - Insira um valor inteiro e maior que zero: ");
        scanf("%d", &lista2[i]);

        if(lista2[i] <= 0){

            printf("\nValor Incorreto, Insira um novo valor: ");
            scanf("%d", &lista2[i]);
        }

    }

    for(i = 0; i<10; i++){

        for(j = 0; j<10; j++){

            if(lista1[i] == lista2[j]){
                
                break;

            }

            if(j == 9){

                diferen[diff] = lista1[i];
                diff++;
            }

        }

    }

    for(i = 0; i<10; i++){

        for(j = 0; j<10; j++){

            if(lista2[i] == lista1[j]){
                
                break;
                
            }

            if(j == 9){

                diferen[diff] = lista2[i];
                diff++;
            }

        }

    }

    printf("\n\n------------------------------------Numeros que não se repetem------------------------------\n");

    for(i = 0; i<diff; i++){

        printf("%d - ", diferen[i]);

    }


    return 0;

}