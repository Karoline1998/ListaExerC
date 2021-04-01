#include <stdio.h>
#include <stdlib.h>

int opcs() {
    int opc;

    printf("Formas de Pagamentos:\n");

    printf("1 - A vista\n");
    printf("2 - 2 pacelas\n");
    printf("3 - 3 parcelas\n");
    scanf("%d", &opc);

    printf("\n\n");

    return(opc);
}
float aVista(float val) {
    printf("Total: %.2f\n", val);
    printf("Valor total a pagar: %.2f\n", val * 0.9);

    return 0;
}
float duasVezes(float val) {
    printf("Total: %.2f\n", val);
    printf("Valor total de duas parcelas: %.2f\n", val / 2);

}
float tresVezes(float val) {
    int par;

     printf("Total: %.2f\n", val);

     do{
        printf("Quantidade de parcelas\n");
        scanf("%d", &par);

     } while((par > 10) || (par <3));

     printf("%d Parcelas de %.2f\n", par, (val * 1.03)/par);

     return 0;
}
int main() {

    float vComp;
    int op;

    printf("Entre com o valor total da compra:\n");
    scanf("%f", &vComp);

    printf("\n\n");

    switch(opcs()) {
    case 1:
         printf("Opcao de pagamento a vista selecionada\n");
         aVista(vComp);
        break;
    case 2:
        printf("Opcao de pagamento em parcelas de 2x selecionada\n");
        duasVezes(vComp);
        break;
    case 3:
        printf("Opcao de pagamento em parcelas de 3x ou mais selecionada\n");
        tresVezes(vComp);
        break;
    default:
        printf("Compra cancelada\n");
    }
    return 0;

}
