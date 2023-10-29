#include <stdio.h>
#include <stdlib.h>

int main(){
    int menor = 0, maior = 0;
    printf("Digite o menor e o maior valor do intervalo: \n");
    scanf("%d %d", &menor, &maior);
    int tamanho = maior - menor + 1;
    int vetor[tamanho];
    int pares[tamanho];
    
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = menor + i;
        if (vetor[i] % 2 == 0) {
            pares[i] = vetor[i];
        } else {
            pares[i] = 0; 
        }
    }
    
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        if (pares[i] != 0) {
            soma += pares[i];
        }
    }
    
    printf("Os numeros pares sao: \n");
    for (int i = 0; i < tamanho; i++) {
        if (pares[i] != 0) {
            printf("%d ", pares[i]);
        }
    }
    
    printf("A soma dos números pares : %d\n", soma);
    
    return 0;
}
