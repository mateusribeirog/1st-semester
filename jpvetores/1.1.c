#include <stdio.h>
int main(){
    int vet[101];
    for(int i = 200;i>=100; i--){
        vet[i] = i;
        printf("%d\n", vet[i]);
    }
    return 0;
}