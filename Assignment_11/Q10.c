#include<stdio.h>

long fact(long n){
    if(n==0 || n==1)
        return 1;
    
    return n*fact(n-1);
}

void series(int n){
    long sum = 0;
    for(int i=1; i<=n; i++)
        sum += fact(i)/i;

    printf("Sum of series upto n=%d is %ld", n, sum);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    series(n);

    return 0;
}