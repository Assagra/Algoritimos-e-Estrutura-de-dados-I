/*
Exercicio 8: Printar Dados Pessoais 
Autor: Lucas Assagra
Data: 14/03/2022
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30] = "Lucas Assagra";
	int idade, CPF, RG;

	idade = 18;
	CPF = 52484478879;
	RG = 4564687953;
	
	printf("Nome: %s\n", nome);
	printf("Idade: %d\n", idade);
	printf("CPF: %d\n", CPF);
	printf("RG: %d\n", RG);

	return 0;
	
}
