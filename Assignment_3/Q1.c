#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n > 0)
        printf("%d is a positive number.", n);
    else
        printf("%d is a non-positive number.", n);

    return 0;

}