#include<stdio.h>
int main(){
    int y;
    printf("Enter year: ");
    scanf("%d", &y);

    if(y%100 == 0){
        if(y%400 == 0)
            printf("Year: %d is a leap year", y);
        else{
            printf("Year %d is not a leap year", y);
            return 0;
        }
    }
    else if(y%4 == 0)
        printf("Year %d is a leap year", y);
    else
        printf("Year %d is not a leap year", y);

    return 0;
}