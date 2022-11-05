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
	
	//verificação 
	
	if( (idade >= 18) && (idade <= 67) ){
		
		printf("\nDoação autorizada");
		
	}else{
		
		printf("\nDoação não autorizada");
	}
	
	return 0;
	
}
