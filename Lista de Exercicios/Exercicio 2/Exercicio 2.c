/*
	Name: Lucas Assagra
	Date: 28/03/22 22:06
	Description: as quatro operaçoes com dois numeros
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float resul, n1, n2;
	
	//entrada dos numeros
	
	printf("Entre com dois valores: ");
	scanf("%f %f", &n1 , &n2);
	
	// operações com os numeros
	
	resul = n1 + n2;
	printf("A soma é: %.1f\n", resul);
	
	resul = n1 - n2;
	printf("A subtração é: %.1f\n", resul);
	
	resul = n1 * n2;
	printf("A multiplicação é: %.1f\n", resul);
	
	resul = n1 / n2;
	printf("A divisão é: %.1f\n", resul);
	
	return 0;
}
