/*
	Name: Exercicio 8 
	Author: Lucas Assagra
	Date: 01/04/22 15:08
	Description: idade para doar sangue
*/


#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	//entrada idade
	
	printf("Incira sua idade: ");
	scanf("%d", &idade);
	
	//verifica��o 
	
	if( (idade >= 18) && (idade <= 67) ){
		
		printf("\nDoa��o autorizada");
		
	}else{
		
		printf("\nDoa��o n�o autorizada");
	}
	
	return 0;
	
}
