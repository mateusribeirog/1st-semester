#include <stdio.h>

int main(){
    int n;
    printf("N= ?\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        int termo = i * i;
        printf("%d ", termo);
    }
    return 0;
}
