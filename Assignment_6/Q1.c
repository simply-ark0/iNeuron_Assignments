#include<stdio.h>
int main(){
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1; i<=n; i++)
        sum += i;

    printf("Sum of first %d natural numbers: %d", n, sum);

    return 0;
}