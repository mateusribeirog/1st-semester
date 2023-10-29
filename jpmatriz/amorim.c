#include <stdio.h>
#include <math.h>
int main()
{
    int tamanho, comparacao = 0;
    printf("Digite o tamanho da matriz\n");
        scanf("%d", &tamanho);
    int matriz[tamanho][tamanho], naozeros[tamanho];
    printf("Digite a matriz:\n");
    for(int i = 0; i < tamanho; i++)
    {
        for(int j = 0; j < tamanho; j++)
        {
            if(i == 0)
            {
                naozeros[j] = 0;
            }
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] != 0)
            {
                naozeros[j]++;
            }
        }
    }
    for(int i = 0; i < tamanho; i++)
    {
        if(naozeros[i] > comparacao)
        {
            comparacao = naozeros[i];
        }
    }
    for(int i = 0; i < tamanho; i++)
    {
        if(naozeros[i] == comparacao)
        {
            printf("%d ", i+1);
        }
    }
    
      return 0;
}