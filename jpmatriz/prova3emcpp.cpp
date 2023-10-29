#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Digite o tamanho da matriz NxN" << "\n";
    cin >> n;
    int matriz[n][n];
    vector<int> resultado, somacolunas(n, 0);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> matriz[i][j];
        }
    }
    int soma;
    for(int j=1;j<=n;j++){
        soma = 0;
        for(int i=1;i<=n;i++){
            soma += matriz[i][j];
        }
        somacolunas[j] = soma;
    }
    int maior = somacolunas[1];
    for(int i=1;i<=n;i++){
        if(somacolunas[i] > maior){
            maior = somacolunas[i];
        }
    }
    for(int i=1;i<=n;i++){
        if(somacolunas[i] == maior){
            resultado.push_back(i);
        }
    }   
    for(int i=0;i<resultado.size();i++){
        cout << resultado[i] << " ";
    }

    return 0;
}