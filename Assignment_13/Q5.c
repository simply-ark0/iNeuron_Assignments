#include<stdio.h>

int sumD(int n){
    if(n==0)
        return 0;

    return n%10 + sumD(n/10);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits of %d = %d", n, sumD(n));

    return 0;
}