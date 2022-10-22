#include<stdio.h>
int main(){

    char date[100], i=0, flag=1;
    printf("Enter date in \"DD/MM/YYYY\" format: ");
    scanf("%s", date);

    printf("Day - %c%c , Month - %c%c , Year - %c%c%c%c", date[0], date[1],
           date[3], date[4], date[6], date[7], date[8], date[9]);

    return 0;
}