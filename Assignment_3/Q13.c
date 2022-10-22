#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // if a number is divisble by 3 and 2 both -> it is divisible by 6
    (n % 6) ? printf("Number %d is not divisible by 3 and 2", n)
            : printf("Number %d is divisible by 3 and 2", n);

    return 0;
}