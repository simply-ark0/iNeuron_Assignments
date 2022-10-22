#include<stdio.h>

void oct(int n){
    if(n==0)
        return;
    oct(n/8);
    printf("%d", n%8);
    
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Octal of %dD = ", n);
    oct(n);

    return 0;
}