#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float nota[15];
	float media = 0;
	int i;
	
	for(i = 0; i<15; i++){
		
		printf("Insira a nota do aluno: ");
		scanf("%f", &nota[i]);
		
		media = media + nota[i];
		
	}
	
	media = media / 15;
	
	printf("Media dos alunos: %.1f", media);
	
	return 0;
}
