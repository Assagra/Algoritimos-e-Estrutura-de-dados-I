#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int val1, val2, result;
	
	printf("Incira dois valores inteiros: ");
	scanf("%d %d", &val1, &val2);
	
	if(val1 >= val2){
		
		result = val1 - val2;
		printf("Resultado: %d", result);
		
	}else{
		
		result = val2 - val1;
		printf("Resultado: %d", result);
		
	}
	
	return 0;
	
}
