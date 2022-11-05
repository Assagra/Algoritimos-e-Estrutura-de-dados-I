/*
	Name: Exercicio 5
	Author: Lucas Assagra
	Date: 30/03/22 10:31
	Description: preço e quantidade do produto com desconto 
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float preco, total;
	int quant;
	
	// entrada dos valores
	
	printf("Entre com o proço do produto: ");
	scanf("%f", &preco);
	
	printf("Entre com a quantidade do produto: ");
	scanf("%d", &quant);
	
	//processos
	
	total = preco * quant;
	
	//verificação para desconto 
	
	if(quant >= 10){
		
		total = (total * 90) / 100;
		
	}
	
	//saida
	
	printf("preço do produto: %.2f\n", preco);
	printf("quantidade comprada: %d\n", quant);
	printf("total a pagar: %.2f\n", total);
	
	return 0;
	
}
