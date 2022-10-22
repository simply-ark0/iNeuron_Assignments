#include<stdio.h>

int sqrSum(int n){
    if(n==1)
        return 1;

    return n*n+sqrSum(n-1);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of squares of %d natural numbers = %d", n, sqrSum(n));

    return 0;
}