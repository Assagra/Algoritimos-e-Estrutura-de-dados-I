/*---------------------------------------------------------------------------------
Exercicio 4: Area do quadrado 
Autor: Lucas Assagra
Data: 14/03/2022
------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
		
	int lado = 10, area;
	
	area = lado*lado;
	
	printf("a Área do quadrado é: %d", area);
	return 0;
}
