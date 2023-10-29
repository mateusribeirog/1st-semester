#include <stdio.h>
#include <math.h>

int main(){
    int n=0, soma=0;
    double media=0;
    int x;
    while(scanf("%d", &x)){ //fazer o programa ler os numeros ate digitar "eof" (end of file)
        n++;
        soma += x;
    }

    media = (double)soma/n;
    printf("a media e %.2f", media);

    return 0;
}