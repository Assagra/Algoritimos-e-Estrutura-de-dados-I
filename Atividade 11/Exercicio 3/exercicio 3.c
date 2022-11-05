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
	
	
	//verifica��o
	
	if(lado1 == lado2){
		printf("Os valores s�o invalidos, isso n�o calcula quadrado");
		
		return 1;
	}
	
	//calculo da area
	
	area = lado1 * lado2;
	
	//calculo do perimetro 
	
	perimetro = (lado1 * 2) + (lado2 * 2);
	
	//saida dos dados
	
	printf("Os valores entrados s�o: %d e %d\n", lado1, lado2);
	printf("A �rea do retangulo �: %d\n", area);
	printf("O perimetro do retangulo �: %d\n", perimetro );
	
	return 0;
}
