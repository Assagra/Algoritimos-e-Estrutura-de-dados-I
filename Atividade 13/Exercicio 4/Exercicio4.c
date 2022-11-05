/*
	Name: Exercicio 4
	Author: Lucas Assagra
	Date: 04/04/22 21:37
	Description: contagem de 1 ate N while
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N, i = 1;
	
	printf("\n incira um numero maior que 0:");
	scanf("%d", &N);
	
	if(N <= 0){
		
		printf("Valor invalido\n");
		
		return 1;
		
	}else{
		
		while( i <= N ){
			
			printf("\n\nValor de i: %d", i);
			i++;
		}
		
		printf("\n\nvalor de N: %d", N);
		
	}
	
	return 0;
	
}
