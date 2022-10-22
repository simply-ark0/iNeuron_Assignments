#include<stdio.h>

short check(int n, int dig){

    while(n!=0){
        int buff = n%10;
        if(dig == buff){
            return 1;
        }
        n /= 10;
    }

    return 0;

}

int main(){
    int n, dig;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter the digit to be found: ");
    scanf("%d", &dig);

    (check(n, dig))?printf("The number %d contains the digit %d", n, dig):printf("The number %d does not contains the digit %d", n, dig);

    return 0;

}