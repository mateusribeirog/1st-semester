#include <stdio.h>
int main(){
    int n;
    printf("Digite o tamanho da matriz NxN \n");
    scanf("%d", &n);
    int matriz[n][n], resultado[n];
    for(int i=1;i<=n;i++){
        resultado[i] = 0;
    }
    printf("Digite a matriz %dx%d: \n", n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int j=1;j<=n;j++){
        for(int i=2;i<=n;i++){
            if(matriz[i][j] != 0) resultado[j]++;
        }
    }
    int maior = resultado[1];
    for(int i=1;i<=n;i++){
        if(resultado[i] > maior) maior = resultado[i];
    }  
    for(int i=1;i<=n;i++){
        if(resultado[i] == maior) printf("%d ", i);
    }  

    return 0;
}