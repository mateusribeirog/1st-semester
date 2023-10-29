#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int x;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        x = pow(2,i);
        printf("%d\n", x);
    }

    return 0;
}