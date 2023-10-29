#include <stdio.h>

int mult(int a, int b){
    if(a==0||b==0) return 0;
    if(a==1) return b;
    if(b==1) return a;
    return a+(mult(a,b-1));
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", mult(a,b));
    return 0;
}