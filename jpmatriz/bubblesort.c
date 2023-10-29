#include <stdio.h>

void bubblesort(int array[], int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(array[j] > array[j+1]){
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);

    int notas[n];
    for(int i=0;i<n;i++){
        scanf("%d", &notas[i]);
    }

    bubblesort(notas, n);

    printf("Vetor ordenado: \n");
    for(int i=0;i<n;i++){
        printf("%d ", notas[i]);
    }


    return 0;
}