/*
	Name: Lucas Assagra 
	Date: 11/04/22 21:27
	Description: dentro ou fora do intervalo
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Pportuguese");
	
	int num;
	
	printf("Incira um numero entre 100 e 200: ");
	scanf("%d", &num);
	
	if( ( num >= 100 ) && ( num <= 200 ) ){
		
		printf("O numero %d esta no intervalo", num);
		
	}else{
		
		printf("O numero %d não esta no intervalo", num);
	}
	
	return 0;
	
	
}
