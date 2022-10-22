#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if(x & 1)
        printf("Number %d is odd", x);
    else
        printf("Number %d is even", x);
}