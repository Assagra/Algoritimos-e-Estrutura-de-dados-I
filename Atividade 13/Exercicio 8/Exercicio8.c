/*
	Name: Exercicio 8
	Author: Lucas Assagra
	Date: 04/04/22 21:37
	Description: contagem de 1 ate N for
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N, i;
	
	printf("\n incira um numero maior que 0:");
	scanf("%d", &N);
	
	if(N <= 0){
		
		printf("Valor invalido\n");
		
		return 1;
		
	}else{
		
		for(i = 0; i <= N; i++){
			
			printf("\nValor de i: %d\n", i);
		}
		
		printf("\n\nvalor de N: %d", N);
		
	}
	
	return 0;
	
}
