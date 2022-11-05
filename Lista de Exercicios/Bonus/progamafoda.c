#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float cel, fah;
    int option;

    printf("escolha a conver√ß√£o desejada\n");
    printf("celsius - 1 \nfahrenheit - 2\n");
    
    do{
    	
	    scanf("%d", &option);
	
	    switch (option){
	
	        case 1:
	
	            printf("Incira a temperatura em fahrenheit: ");
	            scanf("%f", &fah);
	
	            cel = ( (fah - 32) * 5) / 9;
	
	            printf("\n\nA temperatura comvertida È de %.1f celsius", cel);
	
	            break;
	        
	        case 2:
	
	            printf("Incira a temperatura em celsius: ");
	            scanf("%f", &cel);
	
	            fah = (9 * cel + 160) / 5;
	
	            printf("\n\nA temperatura comvertida È de %.1f fahrenheit", fah);
	
	            break;
	
	        default:
	
	            printf("valor invalido\n");
	
	    }
	    
	}while( (option != 1 ) && (option != 2) );

    return 0;



}
