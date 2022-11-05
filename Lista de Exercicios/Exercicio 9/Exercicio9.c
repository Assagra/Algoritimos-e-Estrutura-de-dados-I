/*
	Name: Lucas Assagra
	Date: 11/04/22 21:57
	Description: maior numero entre dois distintos
*/


#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int val1, val2;
	
	printf("Incira dois valores distintos: ");
	scanf("%d %d", &val1, &val2);
	
	if(val1 == val2){
		
		while(val1 == val2){
			
			printf("Valores iguais, incira novamente: ");
			scanf("%d %d", &val1, &val2);
			
		}
		
	}
	
	if(val1 > val2){
		
		printf("O maior valor é %d", val1);
		
	}else{
		
		printf("O maior valor é %d", val2);
	}
	
	return 0;
	
}
