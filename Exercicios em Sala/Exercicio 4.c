/*
	Name: Exercicio 4
	Author: Lucas Assagra
	Date: 02/05/22 21:34
	Description: entrando com os valores no array
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n**********************");
	printf("\nInicio do programa 04");
	
	int vetor[5], i, trab;
	
	for(i=0; i<5; i++){
		printf("\nEntre com um valor numérico inteiro: ");
		scanf("%d", &trab);
		vetor[i] = trab;
	}
	
	for(i=4; i>=0; i--){
		printf("\n%d", vetor[i]);
	}
	
	printf("\nFim do programa 04");
	printf("\n******************");
	
	return 0;
}
