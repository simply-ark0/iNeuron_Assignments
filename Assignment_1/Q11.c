#include<stdio.h>
int main(){

    char time[10];

    printf("Enter Time in \"HH:MM\" format: ");
    scanf("%s", time);

    printf("%c%c hour and %c%c Minute", time[0], time[1], time[3], time[4]);

    return 0;
}