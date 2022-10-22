#include<stdio.h>

int count(int n){
    int sum=0;
    if(n==0)
        return 0;

    sum = count(n/10);
    return sum+1;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Count of digits of %d = %d", n, count(n));

    return 0;
}