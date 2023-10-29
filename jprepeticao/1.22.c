int fiboR(int n){
    if (n<=1) return 1;
    return fiboR(n-1)+fiboR(n-2);
}

int fiboI(int n){
    int a=1, b=1;
    long long int c;
    if (n<=1) return a;
    else{
        for(int i=2; i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }      
}



int main(){
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
    printf("%d ", fiboI(i));
    }
 
    printf("\n");

    for(int i=0;i<n;i++){
    printf("%d ", fiboR(i));
    
    }
    return 0;
}