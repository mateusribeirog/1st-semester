#include <stdio.h>
#include <math.h>

int main(){
    int n, maior;
    printf("Digite a quantidade de numeros para analisar\n");
    scanf("%d", &n);
    int numeros[n];

        for(int i=0;i<n;i++){
            scanf("%d", &numeros[i]);
        }
        maior = numeros[0];
        for(int i=1;i<n;i++){
            if(numeros[i]>maior) maior = numeros[i];
        }

        printf("o maior valor e %d", maior);

    return 0;
}