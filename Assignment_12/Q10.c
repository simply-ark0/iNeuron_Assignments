#include<stdio.h>

void revNum(int n){
    if(n==0)
        return;
    printf("%d", n%10);
    revNum(n/10);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reverse of %d = ", n);
    revNum(n);

    return 0;
}