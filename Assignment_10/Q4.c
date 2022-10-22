#include<stdio.h>

void prtN(int n){
    if(n>0){
        prtN(n-1);
        printf("%d, ", n);
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    prtN(n);

    return 0;
}