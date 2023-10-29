#include <stdio.h>
#include <string.h>
#include <windows.h>

#define maxn 100

void quest(){

    struct servico{
        int os;
        char data[10];
        float valor;
        char descricao[maxn];
        char nomecliente[maxn];
    };
    
    struct servico s[20];

    for(int i=0;i<sizeof(s)/sizeof(s[0]);i++){
        struct servico temp;
        printf("Digite o OS do servico %d: ", i+1);
        scanf("%d", &temp.os);
        getchar();


        printf("Digite a data do servico %d: ", i+1);
        fgets(temp.data, maxn, stdin);
        getchar();

        printf("Digite o valor do servico %d: ", i+1);
        scanf("%f", &temp.valor);
        getchar();

        printf("Digite a descricao do servico %d: ", i+1);
        fgets(temp.descricao, maxn, stdin);

        printf("Digite o nome do cliente %d: ", i+1);
        fgets(temp.nomecliente, maxn, stdin);

        s[i] = temp;
    }

    float maior = 0.0;
    float media = 0.0;
    char clienteservicomaiscaro[50];
    char descricaoservicomaiscaro[50];
    char datamaiscara[10];
    
    for(int i=0;i<sizeof(s)/sizeof(s[0]);i++){
        media += s[i].valor;
        if(s[i].valor > maior){
        maior = s[i].valor;
        strcpy(clienteservicomaiscaro, s[i].nomecliente);
        strcpy(descricaoservicomaiscaro, s[i].descricao);
        strcpy(datamaiscara, s[i].data);
        } 
    }

    printf("a) media = %.2f\n", media/20.0);
    printf("b) cliente que realizou o servico mais caro = %s\n", clienteservicomaiscaro);
    printf("b) descricao servico mais caro = %.s\n", descricaoservicomaiscaro);
    printf("b) data do servico mais caro = %d", datamaiscara);
}

int main(){
    quest();
    return EXIT_SUCCESS;
}