#include <stdio.h>
int main(){
    int mat[4][4];
    int resultante[12];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i!=j){ 
            for(int x=0;x<12;x++){ 
            resultante[x] = mat[i][j]; 
            }
            }
        }
    }
    printf("Matriz sem os elementos da diagonal principal: \n");
    for(int x=0;x<12;x++){
        printf("%d ", resultante[x]);
    }
    return 0;
}