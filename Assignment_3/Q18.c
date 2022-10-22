#include<stdio.h>
int main(){
    int n;
    printf("Enter month number: ");
    scanf("%d", &n);

    if(n == 2)
        printf("No. of days in month: 28(if non-leap year) and 29(if leap year)");
    else if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 ||
             n == 12)
        printf("No. of days in month: 31");
    else
        printf("No. of days: 30");

    return 0;
}