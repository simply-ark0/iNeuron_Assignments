#include<stdio.h>

void prtOdd(int n){
    if(n==1){
        printf("%d, ", n);
        return;
    }

    prtOdd(n-2);
    printf("%d, ", n);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    prtOdd(2*n-1);

    return 0;
}