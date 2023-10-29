#include <stdio.h>
int main(){
    int x, n, par=0, impar=0;
    printf("Digite quantos numeros voce quer ler: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &x);
        if(x%2==0) par++;
        else{
            impar++;
        }    
    }
    printf("%d pares e %d impares", par, impar);
    return 0;
}