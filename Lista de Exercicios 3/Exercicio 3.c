#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int i, branco = 0, nulo = 0, c2 = 0, c1 = 0, pessoas = 0, op;


    for(i=0; i>=pessoas; i++){

        printf("Insira quantas pessoas irão votar: ");
        scanf("%d", &pessoas);

        if(pessoas <= 0){

            printf("Valor invalido, insira um valor positivo\n");

        }

    }

    printf("\n\n--------------------URNA---------------------\n");

    printf("\n---------opções---------------\n1 - Candidato 1\n2 - Candidato 2\n3 - Voto em branco\n4 - Voto nulo\n-----------------------\n\n");


    for(i = 0; i<pessoas; i++){

        printf("VOTE AQUI: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            c1++;
            break;
        
        case 2:
            c2++;
            break;

        case 3:
            branco++;
            break;

        case 4: 
            nulo++;
            break;

        default:
            printf("Opção inexistente, tente novamente");
            i--;
            break;
        }

    }

    printf("\n\n----------------------RESULTADOS---------------------------\n");

    printf("TOTAL DE VOTOS - %d\n", pessoas);
    printf("Candidato 1 - %d\n", c1);
    printf("Candidato 2 - %d\n", c2);
    printf("Votos em branco - %d\n", branco);
    printf("Voto nulo - %d\n", nulo);

    printf("\n\n-----------------------Ganhador----------------------------\n");

    if(c1 > c2){

        printf("CANDIDATO 1 FOI ELEITO");

    }else if(c2 > c1){

        printf("CANDIDATO 2 FOI ELEITO");

    }else{

        printf("Os candidatos empataram, seguir para o segundo turno");
    }

    return 0;


}