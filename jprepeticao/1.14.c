#include <stdio.h>
int main(){
    float a;
    int b;
    float resposta=0;
    printf("Digite um real A um inteiro B para serem multiplicados atraves de somas: \n");
    scanf("%f%d", &a, &b);
    for(int i=0;i<b;i++){
        resposta +=a;
    }
    printf("Resp: %.2f", resposta);


    return 0;
}