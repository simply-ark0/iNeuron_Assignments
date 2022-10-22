#include<stdio.h>

void Fib(int n){
    int a=0, b=1, c;
    if(n==1){
        printf("%d", a);
        return;
    }
    else if(n==2){
        printf("%d, %d", a, b);
        return;
    }

    printf("%d, %d, ", a, b);
    for(int i=3; i<=n; i++){
        c = a+b;
        printf("%d, ", c);
        a = b;
        b = c;
    }
}

int main(){
    int n; 
    printf("Enter n: ");
    scanf("%d", &n);
    
    Fib(n);

    return 0;
}