#include <stdio.h>
#include <math.h>

int fatorial(int x){
    if(x<=1) return 1;
    return (x*fatorial(x-1));
}

int main(){
    int x=0, fat=0;
    printf("Digite um numero para saber o fatorial: \n");
    scanf("%d", &x);
    printf("O fatorial do numero eh %d", fatorial(x));
    return 0;
}