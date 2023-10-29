#include <stdio.h>
void troca(int v[], int n){
    int i=0, j=n-1;
    while(i<j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    troca(v, n);
    for(int i=0;i<n;i++){
        printf("%d ", v[i]);
    }
    return 0;
}