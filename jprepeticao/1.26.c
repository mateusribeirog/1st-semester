#include <stdio.h>

// 1 +1/2+1/3... ate n

int main(){
    int n;
    float h=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        h += 1.0/i;
    }
    printf("%.2f\n", h);

    return 0;
}
