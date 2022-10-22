#include<stdio.h>

void prtEven(int n){
    if(n==2){
        printf("%d, ", n);
        return;
    }

    prtEven(n-2);
    printf("%d, ", n);
    
}


int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    prtEven(2*n);

    return 0;
}