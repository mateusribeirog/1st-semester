#include<stdio.h>
#include<string.h>

char alfabeto[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void trocas(char alfabeto[],int i,int j){
      char aux;
      aux=alfabeto[i];
      alfabeto[i]=alfabeto[j];
      alfabeto[j]=aux;
}
void permutacao(char alfabeto[],int inf,int sup){
    if(inf==sup){
      for(int i=0;i < sup;i++){
         printf("%c",alfabeto[i]);
      }
      printf("\n");
    }
   else{
      for(int i=inf;i<sup;i++){
 			trocas(alfabeto, inf, i);
			permutacao(alfabeto,(inf + 1), sup);
			trocas(alfabeto, inf, i);        
      }
   }
}
int main(){
   int n;
   printf("Digite a quantidade de letras do alfabeto que deseja permutar: ");
   scanf("%d",&n);
   permutacao(alfabeto,0,n);
   return 0;
}