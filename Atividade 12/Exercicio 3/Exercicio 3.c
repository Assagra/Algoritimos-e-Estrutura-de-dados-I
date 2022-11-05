/*
	Name: Exercicio 3
	Author: Lucas Assagra
	Date: 30/03/22 10:31
	Description: media, aprovado ou reprovado
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, media;
	
	// entrada das notas
	
	printf("Entre com as tres notas: ");
	
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	
	//media
	
	media = (nota1 + nota2 + nota3) / 3;
	
	//verificação 
	
	if(media >= 6){
		
		printf("Aprovado\n");
		printf("media: %.1f\n", media);
		printf("n1: %.1f\nn2: %.1f\nn3: %.1f\n", nota1, nota2, nota3);
		
	}else{
		
		printf("Reprovado\n");
		printf("media: %.1f\n", media);
		printf(" n1: %.1f\n n2: %.1f\n n3: %.1f\n", nota1, nota2, nota3);
		
	}
	
	return 0;
}
