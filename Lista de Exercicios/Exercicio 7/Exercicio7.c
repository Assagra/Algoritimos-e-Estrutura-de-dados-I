/*
	Name: Lucas Assagra
	Date: 11/04/22 21:45
	Description: pre�o da xerox
*/


#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cop;
	float price;
	
	printf("Incira o numero de copias: ");
	scanf("%d", &cop);
	
	if( cop >= 200){
		
		price = cop * 0.30;
		
	}else{
		
		price = cop * 0.50;
		
	}
	
	printf("\n\nO pre�o da copia � de R$ %.2f", price);
	
	return 0;
	
}
