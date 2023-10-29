#include <stdio.h>
#include <math.h>

int main(){
    int x=-1, ze=0, gal=0, gil=0;
    
    while(x!=0){
        printf("Digite um numero para votar sendo 1 para ze 2 para gal, 3 para gil e 0 para parar\n");
        scanf("%d", &x);
            if(x == 1){
                ze++;
            }else if(x ==2){
                gal++;
            }else{
                gil++;}
        
    }
            if(ze > gal && ze > gil){
                printf("O vencedor e ze com %d voto(s)!\n", ze);
            }else if(gal > ze && gal > gil) {
                printf("O vencedor e gal com %d voto(s)!\n", gal);
            }else if(gil > ze && gil > gal) {
                printf("O vencedor e gil com %d voto(s)!\n", gil);
            }else{
                printf("A eleição terminou em empate.\n");
            } 

    return 0;
}