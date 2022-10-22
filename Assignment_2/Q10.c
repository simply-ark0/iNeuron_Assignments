#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    x /= 10;
    printf("Required ans: %d", x*10);

    return 0;
}