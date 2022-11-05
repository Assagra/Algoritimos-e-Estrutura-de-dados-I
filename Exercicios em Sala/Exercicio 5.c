/*
	Name: Exercicio 5
	Author: Lucas Assagra
	Date: 02/05/22 21:34
	Description: media array
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, contador = 0;
	float soma, media;
	float num[5];
	
	for(i=0; i<5; i++){
		
		printf("Incira um valor inteiro: ");
		scanf("%f", &num[i]);
		soma = soma + num[i];
		
	}
	
	media = soma / i;
	
	for(i = 0; i < 5; i++){
		
		if(num[i] >= media){
			
			contador++;
			
		}
	}
	
	printf("\nMedia dos numeros:  %.1f", media);
	printf("\nNumeros acima da media: %d", contador);
	
	return 0;
	
}
