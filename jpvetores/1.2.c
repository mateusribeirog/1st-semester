#include <stdio.h>

int main(){
    int mult[100];
    int j = 0;

    for (int i = 1; i <= 500; i++){
        if (i % 5 == 0){
            mult[j] = i;
            j++;
        }
    }

    printf("os numeros multiplos de 5 de 1 ate 500: ");

    for (int i = 0; i < j; i++) {
        printf("%d ", mult[i]);
    }
    

}