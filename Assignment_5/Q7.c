#include<stdio.h>
int main(){
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    for(int i=n*2; i>=1; i-=2)
        printf("%d\n", i);

    return 0;
}