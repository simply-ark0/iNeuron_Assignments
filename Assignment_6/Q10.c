#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int tempN = n;
    int rev = 0;
    while(n!=0){
        int lastDig = n%10;
        rev = rev*10 + lastDig;
        n /= 10;
    }

    printf("Reversed sequence of %d is %d", tempN, rev);

    return 0;
}