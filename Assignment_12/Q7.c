#include<stdio.h>

void sqrN(int n){
    if(n==1){
        printf("%d, ", n*n);
        return;
    }

    sqrN(n-1);
    printf("%d, ", n*n);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    sqrN(n);

    return 0;
}