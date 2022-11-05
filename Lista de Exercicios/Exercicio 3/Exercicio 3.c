/*
	Name: Lucas Assagra
	Date: 28/03/22 22:07
	Description: 
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char nome[30];
	float salario, salarioF, vendas;
	
	//entrada dos dados
	
	printf("Incira o nome do vendedos: ");
	scanf("%s", &nome);
	
	printf("Incira o seu salario fixo: ");
	scanf("%f", &salario);
	
	printf("Incira o valor total das vendas: ");
	scanf("%f", &vendas);
	
	//calculo do salario
	
	salarioF = (vendas * 20) / 100;
	salarioF += salario;
	
	//saida dos dados
	
	printf("\n\nNome: %s\n", nome);
	printf("Salario: %.2f\n", salario);
	printf("valor das vendas: %.2f\n", vendas);
	printf("Salario final: %.2f\n", salarioF);
	
	return 0;
	
}
