/*
	Name: Lucas Assagra
	Date: 28/03/22 22:06
	Description: as quatro opera�oes com dois numeros
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float resul, n1, n2;
	
	//entrada dos numeros
	
	printf("Entre com dois valores: ");
	scanf("%f %f", &n1 , &n2);
	
	// opera��es com os numeros
	
	resul = n1 + n2;
	printf("A soma �: %.1f\n", resul);
	
	resul = n1 - n2;
	printf("A subtra��o �: %.1f\n", resul);
	
	resul = n1 * n2;
	printf("A multiplica��o �: %.1f\n", resul);
	
	resul = n1 / n2;
	printf("A divis�o �: %.1f\n", resul);
	
	return 0;
}
