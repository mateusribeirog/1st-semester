#include <stdio.h>

void binario(int n){
    int b[9], i=0;
    while(n>0){
        b[i] = n%2;
        n = n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d", b[j]);
    }
}

int binario2(int n){
    if(n==0) return 0;
    else return (n%2+10*binario2(n/2));
}

int main(){
    int n;
    scanf("%d", &n);
    binario(n);
    printf("\n");
    printf("%d", binario2(n));
    return 0;
}