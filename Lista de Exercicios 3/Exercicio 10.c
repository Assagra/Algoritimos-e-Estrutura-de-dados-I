#include <locale.h>
#include <stdio.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int list[10];
	int i;
	
	for(i = 0; i<10; i++){
		
		printf("Insira um valor inteiro: ");
		scanf("%d", &list[i]);
		
		if(list[i] < 0){
			
			list[i] = 0;
		}
	}
	
	
	printf("\n\n------------------------lista-----------------------\n");
	
	for(i = 0; i<10; i++){
		
		printf("%d. %d", i, list[i]);
			
	}
	
	return 0;
	
}
