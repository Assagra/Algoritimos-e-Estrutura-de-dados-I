#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float cel, fah;

    printf("Incira a temperatura em celsius: ");
    scanf("%f", &cel);

    fah = (9 * cel + 160) / 5;

    printf("\n\nA temperatura comvertida é de %.1f fahrenheit", fah);

    return 0;

}