/*
	Name: Lucas Assagra
	Date: 11/04/22 21:57
	Description: Clasificação dos jogadores
*/


#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Incira sua idade: ");
	scanf("%d", &idade);
	
	if( idade < 13){
		
		printf("\n\nCategoria: Infantil");
		
	} else if( idade <= 17){
		
		printf("\n\nCategoria: Juvenil");
		
	}else{
		
		printf("\n\nCategoria: Sênior");
	}
	
	return 0;
	
}
