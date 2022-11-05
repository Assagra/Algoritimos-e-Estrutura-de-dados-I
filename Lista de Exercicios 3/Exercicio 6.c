#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int lista[8];
    int i, soma = 0;

    for(i = 0; i<8; i++){

        printf("Incira um valor Inteiro: ");
        scanf("%d", &lista[i]);

        if((i == 0) || (i == 7)){

            soma = soma + lista[i];

        }

    }

    printf("Numeros somados - %d %d\n", lista[0], lista[7]);
    printf("Resultado da soma - %d", soma);

    return 0;

}