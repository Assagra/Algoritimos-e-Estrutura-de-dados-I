/*---------------------------------------------------------------------------------
Exercicio 5: Fahrenheit para Celsius
Autor: Lucas Assagra
Data: 21/03/2022
------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double fah, cel;
	
	//entrada dos dados
	
	printf("Entre com a temperatura em Fahrenheit: ");
	scanf("%lf", &fah);
	
	//converção
	
	cel = (fah - 32) / 1.8;
	
	//saida dos dados
	
	printf("O valor em Fahrenheit entrado foi de: %.1lf graus\n", cel);
	printf("O valor convertido para Centigrados é de: %.1lf graus\n", fah);
	
	
	return 0;
}
