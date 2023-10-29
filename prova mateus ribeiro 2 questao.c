#include <stdio.h>
int main(){
    int velmax, velveiculo;
    printf("Digite o valor da velocidade maxima permitida: ");
    scanf("%d", &velmax);
    printf("Digite o valor da velocidade do veiculo: ");
    scanf("%d", &velveiculo);
    if(velveiculo <= velmax){
        printf("Nao ha multa");

        return 0;
    }

    if(velveiculo <= velmax + velmax*0.2){
        printf("Infracao media, perde 4 pontos e multa = RS130,16 ");
    }else if(velveiculo > velmax + velmax*0.2 && velveiculo <= velmax + velmax*0.5){
        printf("Infracao grave, perde 5 pontos e multa = RS195,23");
    }else{
        printf("Infracao gravissima, perde 7 pontos, multa = RS880,41 \nMedidas: suspensao da CNH e curso de reciclagem");
    }
    return 0;
}