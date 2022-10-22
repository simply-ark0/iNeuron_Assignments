#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int buff = n;
    int count = 0;
    while(buff!=0){
        buff /= 10;
        count++;
    }

    printf("The number of digits in %d is %d", n, count);

    return 0;
}