/*
	Name: Exercicio 9
	Author: Lucas Assagra
	Date: 04/04/22 21:37
	Description: soma de 10 valores
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, val, soma = 0;
	
	printf("Incira 10 numeros : \n");
	
	for(i = 1; i <= 10; i++){
		
		scanf("%d", &val);
		
		soma = soma + val;
	}
	
	printf("\n\nO valor total da soma é: %d", soma);
	
	return 0;
}
