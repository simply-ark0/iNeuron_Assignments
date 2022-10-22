#include<stdio.h>
int main(){
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1; i<=n*2; i+=2)
        sum += i;

    printf("Sum of first %d odd natural numbers is: %d", n, sum);

    return 0;
}