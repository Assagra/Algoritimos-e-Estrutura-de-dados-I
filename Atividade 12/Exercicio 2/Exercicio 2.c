/*
	Name: Exercicio 2
	Author: Lucas Assagra
	Date: 30/03/22 10:31
	Description: Verifica��o par ou impar
*/

#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	//entrada do valor
	
	printf("Entre com um valor inteiro: ");
	scanf("%d", &valor);
	
	//verifica��o 
	
	if(valor % 2 == 0){
		
		printf("\nO valor entrado � par");
		
	}else{
		
		printf("\nO valor entrado � impar");
		
	}
	
	return 0;
}
