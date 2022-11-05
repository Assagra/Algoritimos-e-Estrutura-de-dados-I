#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese");

    int lista1[10], lista2[10], iguais[10];
    int i, j, k, igual, ig = 0;

    //convertendo todos os indereços do array para 0

    for(i = 0; i<10; i++){
        iguais[i] = 0;
    }

    printf("------------------Lista 1-------------------\n");

    for(i = 0; i<10; i++){

        printf("Lista 1 - Insira um valor inteiro e maior que zero: ");
        scanf("%d", &lista1[i]);

        if(lista1[i] <= 0){

            printf("Valor invalido, insira um novo valor: ");
            scanf("%d", &lista1[i]);

        }
    }

    printf("\n\n------------------Lista 2-------------------\n");

    for(i = 0; i<10; i++){

        printf("Lista 2 - Insira um valor inteiro e maior que zero: ");
        scanf("%d", &lista2[i]);

        if(lista2[i] <= 0){

            printf("Valor invalido, insira um novo valor: ");
            scanf("%d", &lista2[i]);
            
        }
    }

    for(i = 0; i<10; i++){

        for(j = 0; j<10; j++){

            if(lista1[i] == lista2[j]){

                igual = lista2[j];

                for(k = 0; k<=ig; k++){

                    if(iguais[k] == igual){
                        
                        break;

                    }else if( (iguais[k] != igual) && (iguais[k] == 0) ){

                        iguais[ig] = igual;
                        ig++;
                        break;

                    }
                }
                
			}
			
		}
		
	}

    printf("\n----------------------------REPETIDOS----------------------------\n");

    if(iguais[0] == 0){

        printf("Não ha valores repetidos");
        
    }

    for(i = 0; i< ig; i++){
        
        printf("%d ", iguais[i]);

    }

    return 0;
    
}

