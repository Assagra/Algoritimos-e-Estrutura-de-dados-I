#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int val1, val2;
	
	//entrada dos valores
	
	printf("Incira dois valores inteiros: ");
	scanf("%d %d", &val1, &val2);
	
	//validação 
	
	if( val1 == val2 ){
		
		printf("Valores entrados iguais");
		
	}else{
		
		if( val1 > val2 ){
			printf("%d é o maior valor", val1);
		}else{
			printf("%d é o maior valor", val2);
		}
		
	}
	
	return 0; 
	
}
