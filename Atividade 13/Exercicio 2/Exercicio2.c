/*
	Name: Exercicio 2 
	Author: Lucas Assagra
	Date: 04/04/22 21:37
	Description: contagem de 1 ate 20 while
*/


#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i = 1;
	
	while(i <= 20){
		
		printf("\n%d", i);
		i++;
	}
	
	return 0;
}
