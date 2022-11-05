/*
	Name: Lucas Assagra
	Date: 11/04/22 21:57
	Description: media de tres numeros
*/


#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, media;
	
	printf("Incira tres valores: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	media = (n1 + n2 + n3) / 3;
	
	printf("\n\nA media dos valores é de %.1f", media);
	
	return 0;
	
}
	

