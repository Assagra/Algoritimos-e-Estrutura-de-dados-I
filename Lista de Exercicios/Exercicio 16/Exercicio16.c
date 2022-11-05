#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int A, B, C;

    printf("Incira tres valores distintos: ");
    scanf("%d %d %d", &A, &B, &C);

    if( (A < B) && (A < C)){
        
        if(B < C){

            printf("%d %d %d", A, B, C); 

        }else{

            printf("%d %d %d", A, C, B);

        }

    }else if( (B < A) && (B < C)){

        if(A < C){

            printf("%d %d %d", B, A, C);

        }else{

            printf("%d %d %d", B, C, A);
        }

    }else if( (C < A) && (C < B) ){

        if(A < B){

            printf("%d %d %d", C, A, B);

        }else{

            printf("%d %d %d", C, B, A);

        }

    }

    return 0;
    
}


/*
123
132
213
231
312
321
*/