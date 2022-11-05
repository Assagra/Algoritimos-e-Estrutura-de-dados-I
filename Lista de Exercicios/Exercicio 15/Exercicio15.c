#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float fah, cel;

    printf("Incira a temperatura em fahrenheit: ");
    scanf("%f", &fah);

    cel = ( (fah - 32) * 5) / 9;

    printf("\n\nA temperatura comvertida é de %.1f celsius", cel);
    return 0;
}