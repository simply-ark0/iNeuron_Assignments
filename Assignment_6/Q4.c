#include<stdio.h>
int  main(){
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1; i<=n; i++)
        sum += i*i;

    printf("Sum of the squares of first %d natural numbers: %d", n, sum);

    return 0;
}