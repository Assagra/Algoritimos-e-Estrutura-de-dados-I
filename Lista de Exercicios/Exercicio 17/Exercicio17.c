#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, nota4, media;

    printf("Incira a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Incira a segunda nota do aluno: ");
    scanf("%f", &nota2);
    printf("Incira a terceira nota do aluno: ");
    scanf("%f", &nota3);
    printf("Incira a quarta nota do aluno: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if(media >= 5){

        printf("\n\n******APROVADO******\n\n");
        printf("A media do aluno foi de %.1f", media);

    }else{

        printf("\n\n******REPROVADO******\n\n");
        printf("A media do aluno foi de %.1f", media);
    }

    return 0;
}