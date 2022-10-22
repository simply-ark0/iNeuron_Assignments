#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    (n%7 == 0 || n%3 == 0) ? printf("Number %d is divisible by 7 or 3", n)
                           : printf("Number %d is not divisible by 7 or 3", n);

    return 0;
}