#include <stdio.h>
#include <string.h>

int palin(char str[]){
    int size = strlen(str);
    char strinv[size];
    strcpy(strinv, str);
    strrev(strinv);

    int x = strcmp(str, strinv);
    return x;
}

int main(){
    char str[50];
    scanf("%s", str);   
    int x = palin(str);   
    if(x == 0){
        printf("Sim\n");
    }else{
        printf("Nao\n");
    }
    return 0;
}
