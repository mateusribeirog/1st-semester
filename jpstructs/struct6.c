#include <stdio.h>
#include <string.h>
struct obra{
    int numtb;
    int nex;
    char datac[10];
};
struct tombo{
    int numtb;
    char nobra[100];
    char nomeau[100];
    char nedit[100];
    int ano;
};
int main(){
    struct tombo reg[20];
    struct obra livros[20];
    int resp1;
    char resp2[100];
    char resp3[100];
    for(int i = 0; i < 20; i++){
        printf("Cadastrando o tombo %d:\n", i+1);
        printf("Insira o numero do tombo:\n");
            scanf("%d", &reg[i].numtb);
        getchar();
        printf("Insira o nome da obra:\n");
            fgets(reg[i].nobra, 100, stdin);
        printf("Insira o nome do autor:\n");
            fgets(reg[i].nomeau, 100, stdin);
        printf("Insira o nome da editora:\n");
            fgets(reg[i].nedit, 100, stdin);
        printf("Insira o ano do tombo:\n");
            scanf("%d", &reg[i].ano);
            getchar();
    }
    
    for(int i = 0; i < 20; i++){
        printf("Cadastrando a obra %d:\n", i+1);
        printf("Insira o numero do tombo:\n");
            scanf("%d", &livros[i].numtb);
        getchar();
        printf("Insira o numero do exemplar:\n");
            scanf("%d", &livros[i].nex);
            getchar();
        printf("Digite a data do tombo:\n");
            fgets(livros[i].datac, 100, stdin);
        
       }
       printf("Qual o ano a ser analisado?\n");
        scanf("%d", &resp1);
        getchar();
        for(size_t i = 0; i < 20; i++){
            if(reg[i].ano == resp1){
                printf("%s", reg[i].nobra);
            }
        }
        printf("Qual o autor a ser analisado?\n");
            fgets(resp2, 100, stdin);
        for(size_t i = 0; i < 20; i++){
            if(strcasecmp(reg[i].nomeau, resp2) == 0){
                printf("%s", reg[i].nobra);
            }
        }
        printf("Qual a editora a ser analisada?\n");
            fgets(resp3, 100, stdin);
        for(size_t i = 0; i < 20; i++){
            if(strcasecmp(reg[i].nedit, resp3) == 0){
                printf("%s", reg[i].nobra);
            }
        }
}