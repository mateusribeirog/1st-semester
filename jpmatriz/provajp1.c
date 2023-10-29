#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    bool feliz = true;
    printf("Digite o tamanho da serie: \n");
    scanf("%d", &n);
    int serie[n];   
    printf("Digite a serie: \n");
    for(int i=0;i<n;i++){
        scanf("%d", &serie[i]);
    }
    if(n == 1){
        printf("Feliz");
        return 0;   
    }   
    for(int i=0;i<n-1;i++){
        int diferenca = 0;
        diferenca = abs(serie[i] - serie[i+1]);
        if(diferenca < 1 || diferenca > (n-1)) feliz = false;
    }
    if(feliz) 
    printf("Feliz");
    else 
    printf("Nao Feliz");
    return 0;
}