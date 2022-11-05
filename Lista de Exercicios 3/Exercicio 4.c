#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float altura[1000];
    float IDmedia = 0, MALmedia = 0, HIDmedia = 0, IDpercent;
    int idade[1000], sexo[1000];
    int i, cont1832 = 0, homem = 0, mulher = 0;

    printf("\n----------Instruções-------------\n");
    printf("Feminino = 0\nMasculino = 1\n-----------------------------\n");


    //entrada dos dados

    for(i = 0; i<1000; i++){

        //sexo
        printf("\nInsira seu sexo: ");
        scanf("%d", &sexo[i]);

        if( (sexo[i] <= -1) || (sexo[i] >= 2) ){

            printf("valor invalido, Tente novamente\n");
            i--;
            continue;

        }
        
        if(sexo[i] == 1){

            homem++;

        }else{

            mulher++;
        }

        //idade
        printf("Insira sua idade: ");
        scanf("%d", &idade[i]);

        //altura
        printf("Insira sua altura: ");
        scanf("%f", &altura[i]);


    }

    //media idade

    for(i = 0; i<1000; i++){

        IDmedia = IDmedia + idade[i];
    }

    IDmedia = IDmedia / 1000;

    //altura mulher media e idade media homem

    for(i = 0; i<1000; i++){

        if(sexo[i] == 0){

            MALmedia = MALmedia + altura[i];

        }else{

            HIDmedia = HIDmedia + idade[i];
        }

        if((idade[i] >= 18) && (idade[i] <= 32)){

            cont1832++;
        }
        
    }

    MALmedia = MALmedia / mulher;

    HIDmedia = HIDmedia / homem;

    IDpercent = (100 * cont1832) / 1000;

    //saida dos dados

    printf("\n\n--------------------MEDIAS---------------------\n");
    printf("Media de idade geral - %.1f\n", IDmedia);
    printf("Media de altura das mulheres - %.1f\n", MALmedia);
    printf("Media de idade dos homens - %.1f\n", HIDmedia);
    printf("percential de pessoas entre 18 a 32 anos - %.1f%", IDpercent);

    return 0;

}