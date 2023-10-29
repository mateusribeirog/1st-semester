#include <stdio.h>
int fiboR(int n){
    if (n<=1) return 1;
    return fiboR(n-1)+fiboR(n-2);
}

int fiboI(int n){
    int a=0, b=1, c=0;
    if (n<=1) return b;
    else{
        for(int i=0;i<n;i++){
            c = a+b;
            a = b;
            b = c;
        }
        return c;
    }      
}
int main(){
    long long int n;
    printf("Digite um numero N para saber o Nesimo termo de fibonacci: ");
    scanf("%lld", &n);

    printf("Iterativamente: ");
    for(int i=0;i<n;i++){
        printf("%lld ", fiboI(i));
    }
    printf("\n\n");
    printf("Recusrsivamente: ");
    for(int i=0;i<n;i++){
        printf("%lld ", fiboR(i));
    }

    return 0;
}