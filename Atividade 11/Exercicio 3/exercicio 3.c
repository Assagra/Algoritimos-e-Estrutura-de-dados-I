/*---------------------------------------------------------------------------------
Exercicio 3: area do retangulo 
Autor: Lucas Assagra
Data: 21/03/2022
------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int lado1, lado2, area, perimetro;
	
	printf("Entre com o primeiro lado: ");
	scanf("%d", &lado1);
	
	printf("Entre com o segundo lado: ");
	scanf("%d", &lado2);
	
	
	//verificação
	
	if(lado1 == lado2){
		printf("Os valores são invalidos, isso não calcula quadrado");
		
		return 1;
	}
	
	//calculo da area
	
	area = lado1 * lado2;
	
	//calculo do perimetro 
	
	perimetro = (lado1 * 2) + (lado2 * 2);
	
	//saida dos dados
	
	printf("Os valores entrados são: %d e %d\n", lado1, lado2);
	printf("A área do retangulo é: %d\n", area);
	printf("O perimetro do retangulo é: %d\n", perimetro );
	
	return 0;
}
