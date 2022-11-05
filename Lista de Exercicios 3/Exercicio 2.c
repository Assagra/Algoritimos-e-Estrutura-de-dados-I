#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float cartao, Tcartao = 0, cheque, Tcheque = 0, cedula, Tcedula = 0, total;
    int i, op;

    printf("Incira a forma de pagamento do cliente\n1 - Cartão\n2 - Cheque\n3 - Cedula");

    for(i = 0; i<150; i++){

        printf("\n\n%d. - Escolha uma forma de pagamento: ", i + 1);
        scanf("%d", &op);

        switch (op){

        case 1:
            
            printf("Cartão - Insira a quantia recebida: ");
            scanf("%f", &cartao);

            Tcartao = Tcartao + cartao;

            break;

        case 2:

            printf("Cheque - Insira a quantia recebida: ");
            scanf("%f", &cheque);

            Tcheque = Tcheque + cheque;

            break;
        
        case 3: 

            printf("Cedula - Insira a quantia recebida: ");
            scanf("%f", &cedula);

            Tcedula = Tcedula + cedula;

            break;

        default:

            printf("Esta opção não Exister\n Tente novamente");
            i--;

            break;
        }

    }

    total = Tcheque + Tcartao + Tcedula;

    printf("\n\n--------------TOTAL DE CADA FORMA DE PAGAMENTO--------------------\n");

    printf("CARTÃO: %2.f\nCHEQUE: %.2f\nCEDULA: %2.f", Tcartao, Tcheque, Tcedula);

    printf("\n\n------------------------------------------------------------------\n");

    printf("Total Recevido: %2.f", total);

    return 0;
}