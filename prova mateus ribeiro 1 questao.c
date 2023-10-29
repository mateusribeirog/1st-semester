#include <stdio.h>
int main(){
    int dia1, mes1, ano1, dia2, mes2, ano2;
    printf("Digite a primeira data no formato dd/mm/aa: \n");
    scanf("%d%d%d", &dia1, &mes1, &ano1);
    printf("Digite a segunda data no formato dd/mm/aa: \n");
    scanf("%d%d%d", &dia2, &mes2, &ano2);

    if(ano1>ano2){
        printf("A data maior e a primeira fornecida: %d %d %d", dia1, mes1, ano1);
        }else if(ano1<ano2){
        printf("A data maior e a segunda fornecida: %d %d %d", dia2, mes2, ano2);
        }   
    if(ano1 == ano2 && mes2>mes1){
        printf("A data maior e a segunda fornecida: %d %d %d", dia2, mes2, ano2);
    }else if(ano1 == ano2 && mes2<mes1){
        printf("A data maior e a primeira fornecida: %d %d %d", dia1, mes1, ano1);
    }else if(ano1 == ano2 && mes2 == mes1 && dia1>dia2){
        printf("A data maior e a primeira fornecida: %d %d %d", dia1, mes1, ano1);
    }else if(ano1 == ano2 && mes2 == mes1 && dia1<dia2){
        printf("A data maior e a segunda fornecida: %d %d %d", dia2, mes2, ano2);
    }
    return 0;    

}