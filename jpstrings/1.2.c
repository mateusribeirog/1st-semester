#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool palin(char str[]){
    int size = strlen(str);
    char strinv[size];
    strcpy(strinv, str);
    strrev(strinv);

    if(strcmp(str, strinv) == 0) return true;
    return false;
}

int main(){
    char str[50];
    scanf("%s", str);   
    if(palin(str)) printf("Sim");
    else printf("Nao");
    return 0;
}
