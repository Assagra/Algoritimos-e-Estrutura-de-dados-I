#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int val1, val2;
	
	//entrada dos valores
	
	printf("Incira dois valores inteiros: ");
	scanf("%d %d", &val1, &val2);
	
	//valida��o 
	
	if( val1 == val2 ){
		
		printf("Valores entrados iguais");
		
	}else{
		
		if( val1 > val2 ){
			printf("%d � o maior valor", val1);
		}else{
			printf("%d � o maior valor", val2);
		}
		
	}
	
	return 0; 
	
}
