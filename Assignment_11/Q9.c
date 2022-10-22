#include<stdio.h>

int sqr(int n){
    return n*n;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Square of %d is %d", n, sqr(n));

    return 0;
}