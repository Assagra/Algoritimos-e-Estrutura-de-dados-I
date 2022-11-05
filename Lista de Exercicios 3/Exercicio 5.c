#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float lista1[10], listaR[10];
    int i;

    for(i = 0; i<10; i++){

        printf("insira um valor Real: ");
        scanf("%f", &lista1[i]);

        listaR[i] = lista1[i] * lista1[i];
    }

    printf("\n\n------------------Valores Entrados------------------\n");

    for(i = 0; i<10; i++){
        printf("%d - %.1f\n", i, lista1[i]);
    }

    printf("\n\n------------------Valores de Saida------------------\n");

    for(i = 0; i<10; i++){
        printf("%d - %.1f\n", i,  listaR[i]);
    }

    return 0;
    
}