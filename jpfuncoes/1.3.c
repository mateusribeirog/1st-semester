#include <stdio.h>
int soma(int a, int b){
    for(int i=0;i<b;i++){
        a++;
    }
    return a;
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", soma(a,b));
    return 0;
}