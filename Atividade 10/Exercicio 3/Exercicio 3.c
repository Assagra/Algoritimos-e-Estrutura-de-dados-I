/*---------------------------------------------------------------------------------
Exercicio 3: Operações Incrementais e Decrementais
Autor: Lucas Assagra
Data: 14/03/2022
------------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){
	
	int A=10, B=2, C=3, D=5, R1, R2, R3;
	
	A += 2;
	B -= 1;
	C *= 2;
	D *= 3;
	
	R1 = ++A + ++B + ++C + ++D;
	
	R2 = A++;
	
	R3 = ++A;
	
	printf("R1 = %d\n", R1);
	printf("R2 = %d\n", R2);
	printf("R3 = %d\n", R3);
	printf("A = %d\n", A);
	
	return 0;
}
