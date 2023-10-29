#include <stdio.h>
#include <math.h>

int main(){
    int N;
    int X=1;
    printf("Digite os numeros: \n");
    while(scanf("%d", &N)){
        X *= N;
    }
    printf("%d\n", X);
    return 0;
}