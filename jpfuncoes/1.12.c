#include <stdio.h>

int maior(int n, int v[]){
    int maior = v[0];
    for(int i=0;i<n;i++){
        if(v[i] > maior) maior = v[i];
    }
    return maior;
}

int main(){
    int n;
    scanf("%d", &n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    printf("%d", maior(n, v));
    return 0;
}