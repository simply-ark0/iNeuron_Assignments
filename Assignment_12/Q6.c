#include<stdio.h>

void prtEvenrev(int n){
    printf("%d, ", n);
    if(n==2)
        return;
    else
        prtEvenrev(n-2);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    prtEvenrev(2*n);

    return 0;
}