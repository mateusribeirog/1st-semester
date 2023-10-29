#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    typedef struct{
        int code;
        char desc[100];
        float val;
        int qntd;
    } estoque;
    int main(){
        estoque dndr [10];
        for(int i = 0; i < 10; i++){
            dndr[i].code = i + 1;
            printf("Descreva o produto %d:\n", dndr[i].code);
                fgets(dndr[i].desc, 100, stdin);
            printf("Digite o valor do produto %d:\n", dndr[i].code);
                scanf("%f", &dndr[i].val);
            getchar();
            printf("Digite quantas unidades do produto %d tem em estoque:\n", dndr[i].code);
                scanf("%d", &dndr[i].qntd);
            getchar();
        }
        




        return 0;
    }