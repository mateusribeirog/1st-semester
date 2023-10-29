#include <stdio.h>

int main() {
    float precos[100];
    int vendas[100], i;


    printf("Digite os precos das mercadorias:\n");
    for (i = 1; i <= 100; i++) {
        printf("Preco da mercadoria %d: ", i);
        scanf("%f", &precos[i]);
    }

    for (i = 1; i <= 100; i++) {
        vendas[i] = 0;
    }

    printf("Digite as quantidades vendidas das mercadorias (ou 0 para nenhuma venda):\n");
    while (1) {
        int nummercad, quant;
        printf("Numero da mercadoria (ou 0 para encerrar): ");
        scanf("%d", &nummercad);

        if (nummercad == 0) {
            break;
        }

        if (nummercad < 1 || nummercad > 100) {
            printf("Numero de mercadoria invalido.\n");
            continue;
        }

        printf("Quantidade vendida: ");
        scanf("%d", &quant);

        vendas[nummercad] += quant;
    }

    
    float faturamento = 0.0;
    for (int i = 1; i <= 100; i++) {
        faturamento += precos[i] * vendas[i];
    }

    printf("Faturamento mensal: %.2f\n", faturamento);

    return 0;
}
