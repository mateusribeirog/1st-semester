#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* conversao(int x){
    char *c = NULL;
    if(x == 1){
        c = (char*)malloc(sizeof(char)*2);
        strcpy(c, "um");
    }
    else if(x == 2){
        c = (char*)malloc(sizeof(char)*4);
        strcpy(c, "dois");
    }
     else if(x == 3){
        c = (char*)malloc(sizeof(char)*4);
        strcpy(c, "tres");
    }
     else if(x == 4){
        c = (char*)malloc(sizeof(char)*6);
        strcpy(c, "quatro");
    }
     else if(x == 5){
        c = (char*)malloc(sizeof(char)*5);
        strcpy(c, "cinco");
    }
     else if(x == 6){
        c = (char*)malloc(sizeof(char)*4);
        strcpy(c, "seis");
    }
     else if(x == 7){
        c = (char*)malloc(sizeof(char)*4);
        strcpy(c, "sete");
    }
     else if(x == 8){
        c = (char*)malloc(sizeof(char)*4);
        strcpy(c, "oito");
    }
     else if(x == 9){
        c = (char*)malloc(sizeof(char)*4);
        strcpy(c, "nove");
    }
     else if(x == 9){
        c = (char*)malloc(sizeof(char)*4);
        strcpy(c, "nove");
    }
    else{
        c = (char*)malloc(sizeof(char)*4);
        strcpy(c, "zero");
    }
    return c;
}
int main(){
    int ano;
    scanf("%d", &ano);
    int mil = ano/1000;
    int cent = (ano%1000)/100;
    int dez = (ano%100)/10;
    int un = ano%10;
    char *m = conversao(mil);
    char *c = conversao(cent);
    char *d = conversao(dez);
    char *u = conversao(un);
    printf("%s mil %s cem %s dez %s", m, c, d, u);
    free(m);
    free(c);
    free(d);
    free(u);




    return 0;
}