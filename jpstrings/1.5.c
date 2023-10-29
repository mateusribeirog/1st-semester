#include<stdio.h>
#include<string.h>
#include<ctype.h>

void tira(char str[], char c){
    int size = strlen(str), count=0;
    char str2[size];
    for(int i=0;i<size;i++){
        if(str[i] != c){
        str2[count] = str[i];
        count++;
        }
    }
    str2[count] = '\0';
    strcpy(str, str2);
    printf("%s", str);

}


int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    char c;
    scanf("%c", &c);
    tira(str, c);
    return 0;
}