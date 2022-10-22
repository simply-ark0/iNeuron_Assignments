#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    short t = n%2;
    switch(t){
        case 0:
            printf("Upper nearest odd number to this number: %d", n+1);
            break;
        case 1:
            printf("Entered number is odd");

    }

    return 0;
}