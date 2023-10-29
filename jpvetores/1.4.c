#include <stdio.h>

int main(){
    float media, altura, soma = 0;
    int i, j = 0;
    float Alt[10];

    for (i = 1; i <= 10; i++){
        printf("digite a altura: ");
        scanf("%f", &altura);
        Alt[j] = altura;
        j++;
        soma += altura;
    }

    media = soma/10;

    printf("as alturas maiores que a media: ");
    for (i = 0; i < j; i++){
        if (Alt[i] > media){
            printf("%f\n", Alt[i]);
        }
    }
    
}
