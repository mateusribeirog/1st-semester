#include <stdio.h>
#include <string.h>
int main(){
    char senha[15];
    int maj = 0, min = 0, num = 0;
    char numeros[10] = {"0123456789"};
    char mais [26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char menos [26] = {"abcdefghijklmnopqstuvwxyz"};
    scanf("%s", &senha);
    if(strlen(senha) < 8 || strlen(senha) > 15){
        printf("Senha Invalida\n");
        return 0;
    }
    else{
        for(int i = 0; i < strlen(senha); i++){
            if(min == 0){
            for(int j = 0; j < 26; j++){
                if(senha[i] == menos[j]){
                    min = 1;
                }
            }
        }
        if(maj == 0){
            for(int j = 0; j < 26; j++){
                if(senha[i] == mais[j]){
                    maj = 1;
                }
            }
        }
        if(num == 0){
            for(int j = 0; j < 26; j++){
                if(senha[i] == numeros[j]){
                    num = 1;
                }
            }
        }
        }
    }
    if(maj == 1 && min == 1 && num == 1){
        printf("Senha Aceita\n");
    }
    else{
        printf("Senha Invalida\n");
    }
    return 0;
}