/*
	Name: Exercicio 1
	Author: Lucas Assagra
	Date: 09/05/22 22:41
	Description: separando valores pares e impares array
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num[10], par[10], impar[10];
	int i, p=0, imp=0;
	
	for(i = 0; i<10; i++){
		
		printf("\nEntre com valores maiores que zero: ");
		scanf("%d", &num[i]);
		
		if( num[i] <= 0){
			
			printf("\nValor incorreto");
			i--;
			
		}
		
		if(num[i] % 2 == 0){
			
			par[p] = num[i];
			p++;
			
		}else{
			
			impar[imp] = num[i];
			imp++;
		}
	}
	
	printf("\n\n----------Valores Inceridos-------------\n");
	
	for(i = 0; i<10; i++){
		printf("\n%d. %d", i, num[i]);
	}
	
	printf("\n\n----------Valores Pares----------------\n");
	
	for(i = 0; i<p; i++){
		printf("\n%d. %d", i, par[i]);
	}
	
	printf("\n\n---------Valores Impares---------------\n");
	
	for(i = 0; i<p; i++){
		printf("\n%d. %d", i, impar[i]);
	}
	
	return 0;
	
}
