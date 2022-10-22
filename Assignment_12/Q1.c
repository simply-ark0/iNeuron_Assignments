#include<stdio.h>

void prt(int n){
    if(n==1){
        printf("%d, ", n);
        return;
    }
    prt(n-1);
    printf("%d, ", n);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    prt(n);

    return 0;
}