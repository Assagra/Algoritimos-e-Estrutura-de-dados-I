/*
	Name: Exercicio 3
	Author: Lucas Assagra
	Date: 04/04/22 21:37
	Description: contagem de 20 ate 1 while
*/


#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i = 20;
	
	while(i >= 1){
		
		printf("\n%d", i);
		i--;
	}
	
	return 0;
}
