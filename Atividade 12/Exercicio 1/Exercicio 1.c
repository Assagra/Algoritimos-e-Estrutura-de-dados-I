/*
	Name: Exercicio 1
	Author: Lucas Assagra
	Date: 30/03/22 10:31
	Description: Numero maior ou menor que 10
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	printf("------- Inicio do programa ----------\n");
	printf("Entre com um valor numerico inteiro\n");
	
	scanf("%d", &valor);
	
	printf("\nValor entrado: %d\n\n", valor);
	
	if(valor > 10){
		
		printf("Valor entrado maior que 10\n\n");
	
	}else{
		
		printf("Valor entrado menor que 10\n\n");
		
	}
	
	printf("---------Fim do programa ----------");
	
	return 0;
}
