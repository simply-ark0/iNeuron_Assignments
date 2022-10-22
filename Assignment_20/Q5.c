#include<stdio.h>

void max(int *a, int *b){
    if(*a > *b)
        printf("%d is max of given numbers.", *a);
    else if (*a < *b)
        printf("%d is max of given numbers.", *b);
    else
        printf("Both the numbers are equal!");
}

int main(){
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    max(&x, &y);

    return 0;
}