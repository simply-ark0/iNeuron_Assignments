#include<stdio.h>

int sumEven(int n){
    if(n==2)
        return 2;
    
    return n+sumEven(n-2);
}

int main(){
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    printf("Sum of first %d even natural numbers = %d", n, sumEven(2*n));

    return 0;
}