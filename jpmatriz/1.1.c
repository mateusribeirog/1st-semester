#include <stdio.h>
int main(){
    int matriz[6][3];
    int menor=0, maior=0;
    for(int i=0;i<6;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    menor = matriz[0][0];
    maior = matriz[0][0];
    for(int i=0;i<6;i++){
        for(int j=0;j<3;j++){
            if (matriz[i][j] > maior) maior = matriz[i][j];
            if (matriz[i][j] < menor) menor = matriz[i][j];
        }
    }
    printf("Maior: %d\nMenor: %d ", maior, menor);

    return 0;
}
