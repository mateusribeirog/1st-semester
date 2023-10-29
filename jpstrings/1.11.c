#include<stdio.h>
#include<string.h>
int main(){
    char data[10];
    fgets(data, 10, stdin);
    int x = ((data[0] - '0')*10) + (data[1] - '0'); // dias
    int y = ((data[3] - '0')*10) + (data[4] - '0'); // mes
    if(x < 31 && y < 31 && x > 0 && y > 0){
        if(y >= 12){
            if(x <= 12){
                printf("Data valida no formato americano\n");
            }
            else{
                printf("Data invalida\n");
            }
        }
        else{
            if(x >= 12){
                printf("Data valida no formato brasileiro\n");
            }
            else{
                printf("Data valida nos dois sistemas\n");
            }
        }
    }
    else{
        printf("Data invalida\n");
    }

    return 0;
}