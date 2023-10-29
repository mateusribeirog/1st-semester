#include <stdio.h>
int main(){
    float a;
    int b;
    float resposta=1;
    printf("Digite um real A para ser elevado a um inteiro B: \n");
    scanf("%f%d", &a, &b);
    for(int i=0;i<b;i++){
        resposta = resposta*a;
    }
    printf("Resp: %.2f", resposta);


    return 0;
}