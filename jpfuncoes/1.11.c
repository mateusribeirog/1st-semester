#include <stdio.h>

float soma(float v[], int n){
    if(n == 0) return v[0];
    return v[n] + soma(n, n-1);
    
}

int main(){
    int n;
    scanf("%d", &n);

    float v[n];

    for(int i=0;i<n;i++){
        scanf("%f", &v[i]);
    }
    
    printf("%.2f", soma(v, n-1));
    return 0;
}