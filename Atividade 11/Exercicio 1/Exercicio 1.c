/*---------------------------------------------------------------------------------
Exercicio 1: Soma de Valores scanf() 
Autor: Lucas Assagra
Data: 21/03/2022
------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2, soma;
	
	printf("Entre com o primeiro N�mero: ");
	scanf("%d", &numero1);
	
	printf("Entre com o segundo N�mero: ");
	scanf("%d", &numero2);
	
	soma = numero1 + numero2;
	
	printf("Valores Entrados: %d e %d\n", numero1, numero2);
	printf("Soma = %d\n", soma);
	
	return 0;
}
