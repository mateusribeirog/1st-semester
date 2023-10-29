#include<stdio.h>
#include<string.h>
#include<ctype.h>

void sufixo(char str[]){
    int size = strlen(str);
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
        printf("%c", str[j]);
        }
    }

}

int main(){
    char str[50];
    fgets(str, sizeof(str), stdin);
    sufixo(str);
    return 0;
}