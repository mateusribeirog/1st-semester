#include <stdio.h>

int multiplica(int n, int m){
    int resultado=0;
    for(int i=0;i<m;i++){
        resultado += n;
    }
    return resultado;
}

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d", multiplica(n,m));
    return 0;
}