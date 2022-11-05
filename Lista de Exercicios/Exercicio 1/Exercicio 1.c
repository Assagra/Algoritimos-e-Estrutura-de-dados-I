/*
	Name: Lucas Assagra
	Date: 28/03/22 21:49
	Description: area de um triangulo
*/


#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float area, base, altura;
	
	// entrada dos dados
	
	printf("Incira a base e logo depois a altura do triangulo: ");
	scanf("%f %f", &base, &altura);
	
	//calculo da area
	
	area = (base*altura) / 2;
	
	printf("a area do triangulo é de: %.1f", area);
	return 0;
	
}
