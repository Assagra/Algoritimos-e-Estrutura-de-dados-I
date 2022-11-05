#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i = 100; i > 0; i--){
		
		printf("\n%d", i);
		
	}
	
	return 0;
	
}
