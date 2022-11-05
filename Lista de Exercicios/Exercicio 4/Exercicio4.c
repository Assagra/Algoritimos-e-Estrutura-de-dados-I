/*
	Name: Lucas Assagra 
	Date: 11/04/22 21:27
	Description: media ponderada
*/


#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese0");
	
	char nome[40];
	float n1, n2, n3, media = 0;
	
	printf("Incira o nome do aluno: ");
	scanf("%s", &nome);
	
	printf("Incira as tres notas: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	media = (n1*2 + n2*4 + n3*6) / (2 + 4 + 6);
	
	printf("Aluno: %s\n", nome);
	printf("Nota: %.1f\n", media);
	
	return 0;
	
}
