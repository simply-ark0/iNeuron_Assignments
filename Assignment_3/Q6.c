#include<stdio.h>
int main(){
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);

    if(a>b)
        printf("%d is the greater of the two numbers", a);
    else if(a == b)
        printf("%d, both numbers are same.", a);
    else
        printf("%d is the greater number.", b);

    return 0;
}