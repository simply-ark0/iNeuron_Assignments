#include<stdio.h>

void prtOddrev(int n){
    printf("%d, ", n);
    if(n==1)
        return;
    else
        prtOddrev(n-2);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    prtOddrev(2*n-1);

    return 0;
}