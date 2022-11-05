/*
	Name: Exercicio 3
	Author: Lucas Assagra
	Date: 02/05/22 21:34
	Description: printando os valores do array
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n****************");
	printf("\nInicio do programa 03");
	
	int vetor[5] = {2,4,6,8,10}, i;
	
	for(i=0; i<5; i++){
		printf("\n %d", vetor[i]);
	}
	
	printf("\nFim do programa 03");
	printf("\n******************");
	
	return 0;
}
