#include<stdio.h>

int sumOdd(int n){
    if(n==1)
        return 1;
    
    return n+sumOdd(n-2);
}

int main(){
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    printf("Sum of first %d odd natural numbers = %d", n, sumOdd(2*n-1));

    return 0;
}