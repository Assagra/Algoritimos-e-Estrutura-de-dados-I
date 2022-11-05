/*---------------------------------------------------------------------------------
Exercicio 4: Media Dos Trabalhos
Autor: Lucas Assagra
Data: 14/03/2022
------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	double T1 = 5.0, T2 = 4.5, T3 = 9.0, mediaTrabalhos;
	
	mediaTrabalhos = (T1 + T2 + T3) / 3.0;
	
	printf("Média dos Trabalhos: %.2f\n", mediaTrabalhos);
	
	if(mediaTrabalhos >= 6.0){
		printf("Aprovado nos Trabalhos");
	}else{
		printf("Reprovados nos Trabalhos");
	}
	
	return 0;
}
