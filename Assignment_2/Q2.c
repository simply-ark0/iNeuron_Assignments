#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Number without last digit of %d is %d", x, x/10);
    
    return 0;
}