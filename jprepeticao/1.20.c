#include <stdio.h>

int main(){
    int n=0;
    scanf("%d", &n);
    int primos[n];
    int naoprimos[n];
    for(int i=2;i<n;i++){
        if(n%i==0){
            scanf("%d", &naoprimos[i]);
        }
        else{
            scanf("%d", &primos[i]);

        }
    }

    for(int i=0;i<n;i++){
        printf("%d ", primos[i]);
    }
    return 0;
}
