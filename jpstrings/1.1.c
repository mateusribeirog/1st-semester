#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXN 10100

void troca(char *palavra){
    int size = strlen(palavra);
    for(int i=0;i<size;i++){
        if(isupper(palavra[i])){ 
        palavra[i] = tolower(palavra[i]);
        }
        else if (islower(palavra[i])){
        palavra[i] = toupper(palavra[i]);
        }
    }
}

int main(){

    char palavra[MAXN];
    
    fgets(palavra, sizeof(palavra), stdin);
    troca(palavra);
    printf("%s", palavra);

    return 0;
}