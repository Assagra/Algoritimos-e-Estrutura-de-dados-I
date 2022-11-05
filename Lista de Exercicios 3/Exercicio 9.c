#include <stdio.h>
#include <locale.h>

	
int main () {
	
	setlocale(LC_ALL,"Portuguese");
	
	int lista[10], iguais[10];
	int i, j, k, igual, ig = 0;
	
	for(i = 0; i<10; i++){
		iguais[i] = 0;
	}
	
	for(i=0;i<10;i++){
		printf("Insira um valor qualquer: ");
		scanf("%d", &lista[i]);
	}
	
	for(i = 1; i<10; i++){

    	    for(j = 0; j<10; j++){
    	    	
				if(j<i || j>i){
					
        		    if(lista[i] == lista[j]){

            		    igual = lista[j];

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
		}
		
	if((iguais[0] == 0) && (iguais[1] == 0)){
		
		printf("Todos os valores são diferentes");
		return 0;
	
	}else{
		
		printf("Os números que se repetem são:");
	    
		for(i = 0; i< ig; i++){
	        
	        printf("%d ", iguais[i]);
	
	    }
	}
		


    return 0;
    
}

