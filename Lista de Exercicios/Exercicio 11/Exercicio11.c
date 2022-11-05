/*
	Name: Lucas Assagra
	Date: 11/04/22 21:57
	Description: par ou impar
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	printf("Incira um valor: ");
	scanf("%d", &valor);
	
	if(valor % 2 == 0){
		
		printf("\n\nO valor %d é par", valor);
		
	}else{
		
		printf("\n\nO valor %d é impar", valor);
		
	}
	
	return 0;
}
