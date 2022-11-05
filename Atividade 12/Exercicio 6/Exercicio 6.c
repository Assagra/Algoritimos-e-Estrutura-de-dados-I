/*
	Name: Exercicio 6
	Author: Lucas Assagra
	Date: 31/03/22 14:03
	Description: valores iguais
*/


#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int val1, val2;
	
	//entrada dos valores
	
	printf("incira dois valores inteiros: ");
	scanf("%d %d", &val1, &val2);
	
	//validação 
	
	if( val1 == val2 ){
		
		printf("Valores entrados iguais");
		
	}else{
		
		printf("Valores entrados são diferentes");
		
	}
	
	return 0;
	
}
