#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
    int doc;
    int code;
    char ven[10];
    char pay[10];
    float valcont;
    float juro;
} dados;
int main(){
    dados entrp[15];
    for(int i = 0; i < 15; i++){
        entrp[i].code = i + 1;
        printf("Digite o numero do documento do cliente %d:\n", entrp[i].code);
            scanf("%d", &entrp[i].doc);
        getchar();
        printf("Digite a data de vencimento:\n");
            fgets(entrp[i].ven, 10, stdin);
        printf("Digite a data de pagamento:\n");
            fgets(entrp[i].pay, 10, stdin);
        printf("Digite o valor da conta:\n");
            scanf("%f", &entrp[i].valcont);
        printf("Digite");
    }

    return 0;
}