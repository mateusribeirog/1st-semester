#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main(){
    char captcha[6];
    char userinput[6];
    srand(time(NULL));
    for(int i = 0; i < 6; i++){
        int avulso = rand() % 52;
        int z = rand() % 2;
        int e = rand() % 2;
        if(z == 0){
            if(e == 0){
            captcha[i] = 'a' + avulso - 26;
            }
            else{
                captcha[i] = 'A' + avulso;
            }
        }
        else{
            captcha[i] = avulso + '0';
        }

    }
    captcha[5] = '\0';
     printf("%s\n", captcha);
        scanf("%s", userinput);
        if(strcmp(captcha, userinput) == 0){
            puts("passou\n");
        }
        else{
            puts("nao passou\n");
        }

    return 0;
}