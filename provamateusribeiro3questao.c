#include <stdio.h>
#include <stdlib.h>
int main(){
    float valorinicial, cashback, desconto, valorfinal, parcela;
    int modelo;
    printf("Digite o valor da compra: ");
    scanf("%f", &valorinicial);
    printf("Digite o modelo de pagamento:\n1 para debito ou pix\n2 para credito a vista\n3 para parcelada\n");
    scanf("%d", &modelo);

    if(modelo == 1){
        valorfinal = valorinicial - 0.05*valorinicial;
        cashback = 0.1*valorinicial;
        desconto = 0.05*valorinicial;
            printf("Valor a ser pago: %.2f\n", valorfinal);
            printf("Desconto em cima do preco original: %.2f\n", desconto);
            printf("Voce recebera 100 pontos no cartao fidelidade\n");
            printf("Voce recebera um cashback de: %.2f\n", cashback);
    }else if(modelo == 2){
        cashback = 0.05*valorinicial;
        valorfinal = valorinicial;
            printf("Valor a ser pago: %.2f\n", valorfinal);
            printf("Voce recebera 50 pontos no cartao fidelidade\n");
            printf("Voce recebera um cashback de: %.2f\n", cashback);    
    }else if(modelo == 3){
        cashback = valorinicial*0.05;
            if(valorinicial/3>=20){
               parcela = valorinicial/3; 
                        printf("Voce pagara um total de RS%.2f em 3 parcelas de %.2f reais\n", valorinicial, parcela);
                        printf("Voce recebera 40 pontos no cartao fidelidade\n");
                        printf("Voce nao recebera cashback\n");

                          
            }else{
                parcela = valorinicial/2;
                        printf("Voce pagara um total de RS%.2f em 2 parcelas de %.2f reais\n", valorinicial, parcela);
                        printf("Voce recebera 40 pontos no cartao fidelidade\n");
                        printf("Voce nao recebera cashback\n");

            }  
    }
    return 0;
}