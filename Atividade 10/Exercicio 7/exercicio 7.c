#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int raio = 10;
    float pi = 3.14, area;

    area = (raio * pi)*2;

    printf("A Área do circulo é: %.2f", area);
    return 0;
}