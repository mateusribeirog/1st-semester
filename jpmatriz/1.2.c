#include <stdio.h>
int main(){
    int mat[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Elementos da diagonal principal: \n");
    for(int i=0;i<4;i++){
            printf("%d ", mat[i][i]);
    }
    return 0;
} 