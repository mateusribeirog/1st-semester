#include <stdio.h>

int multiplica(int x, int n){
    if(n==0 || x==0) return 0;
    if(n>0) return (x + multiplica(x, n-1));
    if(n<0) return (-multiplica(x, -n));
}

int main(){
    int x, n;
    scanf("%d%d", &x, &n);
    printf("%d", multiplica(x, n));
    return 0;
}