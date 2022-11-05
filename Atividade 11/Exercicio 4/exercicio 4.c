/*---------------------------------------------------------------------------------
Exercicio 4: Aumento de Salario 
Autor: Lucas Assagra
Data: 21/03/2022
------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	double salario, aumento, salarioF;


	//entrada dos dados 
	
	printf("Entre com o seu salário atual: ");
	scanf("%lf", &salario);
	
	printf("Entre com a porcentagem do aumento ");
	scanf("%lf", &aumento);
	
	//calculo do salario
	
	salarioF = (aumento + 100) * salario;
	salarioF = salarioF / 100;
	
	//saida de dados
	
	printf("O salário inicial era de: R$ %.2lf\n", salario);
	printf("O aumento foi de: %.1lf\n", aumento);
	printf("O salário Final ficara em: %.2lf\n", salarioF);
	return 0;
}
