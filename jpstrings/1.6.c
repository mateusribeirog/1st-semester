#include<stdio.h>
#include<string.h>
#include<ctype.h>

void prefixo(char str[]){
    for(int i=0;i<strlen(str);i++){
        for(int j=0;j<i;j++){
        printf("%c", str[j]);
        }
        printf("\n");
    }

}

int main(){
    char str[50];
    fgets(str, sizeof(str), stdin);
    prefixo(str);
    return 0;
}