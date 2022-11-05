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
	
	printf("Incira um numero entre 200 e 600: ");
	scanf("%d", &num);
	
	if( ( num >= 200 ) && ( num <= 600 ) ){
		
		printf("O numero %d esta no intervalo", num);
		
	}else{
		
		printf("O numero %d não esta no intervalo", num);
	}
	
	return 0;
	
	
}
