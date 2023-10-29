#include <stdio.h>
#include <stdbool.h>

int main(){
    bool aprox = false;
    int n;
    printf("Digite um numero para saber a raiz quadrada: \n");
    scanf("%d", &n);
    int i = 1;
    while(n > 0){
        n-=i;
        i+=2;
        if(n==0) aprox = true;
    }
    if(aprox == true) printf("A raiz exata eh: %d", i/2);
    else printf("A raiz aproximada eh: %d", i/2);
    return 0;
}