#include<stdio.h>

long Rfact(long n, long r){
    if(n==1 || n==0 || n==r)
        return 1;

    return n*Rfact(n-1, r);

}

int main(){

    int n, r;
    printf("Enter n and r numbers: ");
    scanf("%d%d", &n, &r);

    if(n<r){
        printf("Invalid Entry!");
        return 0;
    }

    printf("The number of arrangements one can make from %d items and %d selected at a time = %ld", n, r, Rfact(n, n-r));

    return 0;
}