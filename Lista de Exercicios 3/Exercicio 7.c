#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int val[6];
	int i, maior, menor;
	
	for(i = 0; i<6; i++){
		
		printf("Insira um valor inteiro: ");
		scanf("%d", &val[i]);
		
		
	}
	
	for(i = 5; i>=0; i--){
		
		printf("%d. %d\n", i, val[i]);
		
	}
	
	return 0;
}
