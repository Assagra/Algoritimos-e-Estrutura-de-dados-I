/*
	Name: Exercicio 2
	Author: Lucas Assagra
	Date: 02/05/22 21:34
	Description: printando os valores do array
*/


#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Inicio do Programa 01\n\n");
	
	int vetor[10], i;
	
	vetor[0] = 76;
	vetor[1] = 22;
	vetor[2] = 36;
	vetor[3] = 10;
	vetor[4] = 5;
	vetor[5] = 67;
	vetor[6] = 89;
	vetor[7] = 92;
	vetor[8] = 15;
	vetor[9] = 28;
	
	for(i=0; i<10; i++){
		printf("\n %d", vetor[i]);
	}
	
	printf("\n\nFim do Programa 01"); 
	
	return 0;
	
}
