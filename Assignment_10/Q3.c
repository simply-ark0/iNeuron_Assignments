#include<stdio.h>

unsigned short evenOdd(int n){
    return !(n%2);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    (evenOdd(n))?printf("Returned value is 1, therefore the number %d is even", n):printf("Returned value is 0, therefore the number %d is odd", n);

    return 0;
}