#include<stdio.h>
int main(){
    int y, rem;
    printf("Enter year: ");
    scanf("%d", &y);

    rem = (y%100==0)?(y%400):(y%4);

    switch(rem){
        case 0:
            printf("Year %d is a leap year", y);
            break;
        default:
            printf("Year %d is a not leap year", y);
    }

    return 0;
}