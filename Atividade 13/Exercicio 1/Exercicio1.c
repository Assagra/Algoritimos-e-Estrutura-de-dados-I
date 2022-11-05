/*
	Name: Exercicio 1 
	Author: Lucas Assagra
	Date: 04/04/22 21:37
	Description: laço while
*/


#include <stdio.h>
#include <locale.h>

int main(){
	
	int N, i = 1;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n-------------------------------Inicio do programa--------------------------\n");
	printf("\nEntre com um valor numerico inteiro: \n");
	scanf("%d", &N);
	
	if( N < 10){
		
		printf("\nValor Invalido...");
	
	}else{
		
		while( i <= N ){
			
			printf("\n%d. USCS", i);
			i++;
			
		}
	}
	
	printf("\n-------------------Fim do prgrama--------------------\n");
	
	return 0;
}
