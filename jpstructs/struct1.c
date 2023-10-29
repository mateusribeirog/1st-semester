#include <stdio.h>
#include <string.h> 
#include <windows.h>

void quest(){

    struct pessoa{
        float salario;
        int idade;
        char genero;
        int filhos;

    };
    struct pessoa p[20];
    
    for(int i=0;i<sizeof(p)/sizeof(p[0]);i++){
        struct pessoa temp;
        printf("Digite o salario da pessoa %d: ", i+1);
        scanf("%f", &temp.salario);

        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &temp.idade);
        getchar();

        printf("Digite o genero da pessoa %d: ", i+1);
        scanf(" %c", &temp.genero);
        getchar();

        printf("Digite a quantidade de filhos da pessoa %d: ", i+1);
        scanf("%d", &temp.filhos);
        p[i] = temp;
    }

    float somasalario=0.0, somafilhos=0.0, count=0.0;
    float maior = p[0].salario;


    for(int i=0;i<sizeof(p)/sizeof(p[0]);i++){
        if(p[i].salario > maior) maior = p[i].salario;

        somasalario += p[i].salario;
        somafilhos += p[i].filhos;

        if(p[i].genero == 'F' && p[i].salario > 10000) count++;
    }

    printf("a) media salarial = %.2f\n", somasalario/20);
    printf("b) media de filhos = %.2f\n", somafilhos/20);
    printf("c) maior salario = %.2f\n", maior);
    printf("d) percentual = %.2f\n", count);

}

int main(){
    quest();
    return EXIT_SUCCESS;
}