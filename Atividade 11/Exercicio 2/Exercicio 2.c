/*---------------------------------------------------------------------------------
Exercicio 2: Area do quadrado 
Autor: Lucas Assagra
Data: 21/03/2022
------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int lado, area;
	
	printf("Entre com o lado do quadrado: ");
	scanf("%d", &lado);
	
	area = lado*lado;
	
	printf("o valor do lado é: %d\n", lado);
	printf("o valor da área é: %d\n", area);
	
	return 0;
	
}
