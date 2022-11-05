/*
	Name: Lucas Assagra
	Date: 11/04/22 21:57
	Description: leitura do nome e meida
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30];
	float nota1, nota2, nota3, media;
	
	printf("Incira o seu nome: ");
	scanf("%[^\n]", &nome);
	
	printf("Incira as tres notas das provas: ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	printf("\n\nO aluno %s obteve %.1f de media", nome, media);
	
	return 0 ;
	
}
