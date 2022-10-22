#include<stdio.h>
int main(){
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    for(int i=2; i<=n*2; i+=2)
        printf("%d\n", i);

    return 0;
}