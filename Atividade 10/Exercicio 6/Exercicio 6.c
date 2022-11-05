/*---------------------------------------------------------------------------------
Exercicio 6: area do retangulo
Autor: Lucas Assagra
Data: 14/03/2022
------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int lado1 = 5, lado2 = 10, area;
	
	area = lado1*lado2;
	
	printf("A Área do retangulo é: %d", area);
	return 0; 
}
