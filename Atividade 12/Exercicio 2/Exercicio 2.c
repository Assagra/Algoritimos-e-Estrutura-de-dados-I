/*
	Name: Exercicio 2
	Author: Lucas Assagra
	Date: 30/03/22 10:31
	Description: Verificação par ou impar
*/

#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	//entrada do valor
	
	printf("Entre com um valor inteiro: ");
	scanf("%d", &valor);
	
	//verificação 
	
	if(valor % 2 == 0){
		
		printf("\nO valor entrado é par");
		
	}else{
		
		printf("\nO valor entrado é impar");
		
	}
	
	return 0;
}
