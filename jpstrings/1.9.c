#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool email(char *str){
    int size = strlen(str);
    int x = (int*)strchr(str, '@');
    int y = (int*)strchr(str, '.');
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(str[j] == ' ') return false;
        }
    }
    if( x==NULL || y==NULL) return false;
    return true;
}

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    if(email(str)) puts("Valido");
    else puts("Invalido");
    return 0;
}