#include<stdio.h>
int main(){
    int x;
    printf("Enter a 3-digit number: ");
    scanf("%d", &x);
    int sum = 0;
    while(x != 0){
        sum += x%10;
        x /= 10;
    }

    printf("Sum of digits is: %d", sum);

    return 0;
}