#include<stdio.h>

void prtOddN(int n){
    if(n>0 && n%2){
        prtOddN(n-2);
        printf("%d, ", n);
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    prtOddN(2*n-1);

    return 0;
}