#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void sort(char str[]){

    int size = strlen(str);
    int temp;

    for(int i=0;i<size ;i++){
        for(int j=0;j<size-1;j++){
            if(str[j]>str[j+1]){
            temp = str[j];
            str[j] = str[j+1];
            str[j+1] = temp;
            }
        }
    }
}

bool anagrama(char str[], char str2[]){

    sort(str);
    sort(str2);

    if(strcmp(str, str2) == 0) return true;

    return false;
}


int main(){

    char str[50], str2[50];

    fgets(str, sizeof(str), stdin);
    fgets(str2, sizeof(str2), stdin);

    if(anagrama(str, str2)) puts("S");
    else puts("N");
    
    return 0;
}