#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n==0){
        printf("Entered number is 0");
        return 0;
    }

    short isNeg = n<0;

    switch(isNeg){
        case 1:
            printf("Converting %d to positive %d", n, -1*n);
            break;
        case 0:
            printf("Converting %d to negetive %d", n, -1*n);
            break;
    }

    return 0;
}