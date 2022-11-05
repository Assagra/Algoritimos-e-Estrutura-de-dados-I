/*
	Name: Exercicio 5
	Author: Lucas Assagra
	Date: 04/04/22 21:37
	Description: contagem ate N maior q 10
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int N, i = 1;
	
	printf("\n\nIncira um valor maior que 10: ");
	scanf("%d", &N);
	
	if( N < 10 ){
		
		printf("Valor invalido\n");
		return 1;
		
	}else{
		
		while( i <= N ){
			
			printf("\n\n%i.USCS", i);
			i++;
			
		}
		
		printf("\n\nValor de N: %d", N);
		
	}
	
	return 0;
}
