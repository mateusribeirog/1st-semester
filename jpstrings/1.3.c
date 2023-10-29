#include <stdio.h>
#include <string.h>

// void nome(char str[]){
//     str[strcspn(str, "\n")] = '\0';
//     int ultimoEspaco = strrchr(str, ' ') - str;

// }


int main(){
    char nome[100];
    char sobrenome[100];
    char primeiroNome[100];

    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = '\0';

    int ultimoEspaco = strrchr(nome, ' ') - nome;

    strncpy(sobrenome, nome + ultimoEspaco + 1, sizeof(sobrenome));
    strncpy(primeiroNome, nome, ultimoEspaco);
    
    printf("%s, %s\n", sobrenome, primeiroNome);

    return 0;
}