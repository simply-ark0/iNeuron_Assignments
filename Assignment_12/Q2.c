#include<stdio.h>

void prtNrev(int n){
    printf("%d, ", n);
    if(n==1)
        return;

    prtNrev(n-1);
    
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    prtNrev(n);

    return 0;

}