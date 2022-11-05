/*
	Name: Exercicio 6
	Author: Lucas Assagra
	Date: 04/04/22 21:37
	Description: contagem de 20 ate 1 for
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portugues");
	
	int i;
	
	printf("\n---------------------inicio do programa----------------\n");
	
	for(i = 20; i >= 1; i--){
		
		printf("\n%d.", i);
		
	}
	
	printf("\n\n---------------------fim do programa------------------\n");
	
	return 0;
}
