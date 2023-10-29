#include <stdio.h>
#include <string.h>
struct estilista{
    int code;
    char nome[100];
    float sal;
};
struct station{
    int cods;
    char nome[100];
};
struct roupa{
    int codr;
    char desc[100];
    int coder;
    int codsr;
    int ano;
};
int main(){
    struct estilista estilistas[5];
    struct station estacoes[4];
    struct roupa roupas[10];
    char resp[100];
    int sts;
    for(int i = 0; i < 5; i++){
        printf("Cadastrando os estilistas:\n");
        printf("Codigo:\n");
            scanf("%d", &estilistas[i].code);
        getchar();
        printf("Nome:\n");
        fgets(estilistas[i].nome, 100, stdin);
        printf("Salario:\n");
            scanf("%f", &estilistas[i].sal);
            getchar();
    }
    for(int i = 0; i < 4; i++){
        printf("Cadastrando estacoes:\n");
        printf("Codigo da estacao:\n");
            scanf("%d", &estacoes[i].cods);
        getchar();
        printf("Nome da estacao:\n");
            fgets(estacoes[i].nome, 100, stdin);
    }
    for(int i = 0; i < 10; i++){
        printf("Cadastrando roupas:\n");
        printf("Codigo:\n");
            scanf("%d", &roupas[i].codr);
        getchar();
        printf("Descricao:\n");
        fgets(roupas[i].desc, 100, stdin);
        printf("Codigo do estilista:\n");
            scanf("%d", &roupas[i].coder);
            getchar();
        printf("Codigo da estacao:\n");
            scanf("%d", &roupas[i].codsr);
            getchar();
        printf("Ano:\n");
            scanf("%d", &roupas[i].ano);
            getchar();
    }
    printf("Qual estacao deseja ver?\n");
    fgets(resp, 100, stdin);
    for(int i = 0; i < 4; i++){
        if(strcasecmp(estacoes[i].nome, resp) == 0){
            sts = estacoes[i].cods;
            break;
        }
    }
    for(int i = 0; i < 10; i++){
        if(roupas[i].codsr == sts){
            printf("O codigo da roupa %d dessa estacao eh %d:\n", i+1, roupas[i].codr);
            printf("A descricao da roupa eh '%s'\n", roupas[i].desc);
            printf("O codigo do estilista que pensou essa roupa eh %d", roupas[i].coder);
            printf("O ano em que foi lancada eh %d", roupas[i].ano);
        }


    }
    return 0;
}