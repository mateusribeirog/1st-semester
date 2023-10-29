#include <stdio.h>

int main(){
    int n=0;
    printf("Digite um numero para saber os seus divisores: ");
    scanf("%d", &n);
    int divisores[n];
        for(int i=1;i<=n;i++){
            if(n % i == 0){
                divisores[i-1] = i;
            }
        }
        printf("Os divisores de %d sao: ", n);
        for(int i=0;i<n-1;i++){
        printf("%d ", divisores[i]);

        }
    return 0;
}
