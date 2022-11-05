/*---------------------------------------------------------------------------------
Exercicio 5: Celsius para Fahrenheit
Autor: Lucas Assagra
Data: 21/03/2022
------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double cel, fah;
	
	//entrada de dados
	
	printf("Entre com o valor em Celsius: ");
	scanf("%lf", &cel);
	
	//converção
	
	fah = (1.8 * cel) + 32;
	
	//sainda de dados
	
	printf("O valor entrado em Celsius é de: %.1lf graus\n", cel);
	printf("O valor convertido para fahrenheit é de: %.1lf graus\n", fah);
	return 0;
	
}
