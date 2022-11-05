/*
	Name: Exercicio 1
	Author: Lucas Assagra
	Date: 09/05/22 22:41
	Description: Seleção de valores
*/


#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, valor, array[10];
	
	printf("\n---------------------Inicio do Programa-------------------");
	printf("\n\nEntre com 10 valores numericos inteiros: ");
	
	for(i = 0; i<10; i++){
		scanf("%d", &array[i]);
	}
	
	printf("\n----------------------------------------------------------");
	printf("\nElementos armazenados no array: \n");
	
	for(i = 0; i<10; i++){
		printf("\n%d", array[i]);
	}
	
	printf("\n----------------------------------------------------------");
	printf("\n\nEntre com o valor a ser consultado do array: ");
	
	scanf("%d", &valor);
	
	for(i = 0; i<10; i++){
		
		if(array[i] == valor){
			printf("\n\nO Valor %d Existe no array...\n\n", valor);
			return 0;
		}
		
	}
	
	printf("\n\nO Valor %d NÃO existe no array...\n\n", valor);
	
	return 1;
	
}
