/*
	Name: Lucas Assagra 
	Date: 11/04/22 21:27
	Description: compara��o de valores
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int val1, val2;
	
	printf("Incira dois valores: ");
	scanf("%d %d", &val1, &val2);
	
	if( val1 == val2 ){
		
		printf("\nOs valores s�o iguais");
		
	}else if(val1 > val2){
		
		printf("\nO valor %d � maior", val1);
		
	}else{
		
		printf("\nO valor %d � maior", val2);
		
	}
	
	return 0;
	
	
}
