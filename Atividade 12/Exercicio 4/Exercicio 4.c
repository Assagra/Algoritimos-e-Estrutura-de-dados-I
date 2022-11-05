/*
	Name: Exercicio 4
	Author: Lucas Assagra
	Date: 30/03/22 10:31
	Description: media ponderada, aprovado ou reprovado
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float p1, p2, p3, media;
	
	//entrada das notas
	
	printf("Entre com as tres notas: ");
	scanf("%f %f %f", &p1, &p2, &p3);
	
	//media 
	
	media = (p1*2 + p2*3 + p3*4) / (2 + 3 + 4);
	
	//verificação
	
	if(media >= 5){
		
		printf("Aprovado\n");
		printf("media: %.1f\n", media);
		printf(" p1: %.1f\n p2: %.1f\n p3: %.1f\n", p1, p2, p3);
		
	}else{
		
		printf("Reprovado\n");
		printf("media: %.1f\n", media);
		printf(" p1: %.1f\n p2: %.1f\n p3: %.1f\n", p1, p2, p3);
		
	}
	
	return 0;
	
	
}
