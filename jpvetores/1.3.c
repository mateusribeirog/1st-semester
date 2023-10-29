#include <stdio.h>
#include <math.h>


int main(){
    int pot[10];
    int j = 0;
    int poten;

    for (int i = 1; i <= 20; i++){
        if (i % 2 != 0){
            poten = pow(i,2);
            pot[j] = poten;
            j++;
        }
    }

    printf("o quadrado dos números impares no intervalo fechado de 1 a 20: ");
    for (int i = 0; i < j; i++){
        printf("%d ", pot[i]);
    }
    
}