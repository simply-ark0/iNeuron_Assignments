#include<stdio.h>
#include<stdlib.h>

struct time{
    unsigned short hours;
    unsigned short mins;
    unsigned short seconds;
};

void input(struct time *time){
    
    printf("Enter Hour: ");
    scanf("%hd", &time->hours);

    printf("Enter Mins: ");
    scanf("%hd", &time->mins);

    printf("Enter Seconds: ");
    scanf("%hd", &time->seconds);
}

int main(){
    struct time t1;
    struct time t2;

    printf("Enter for time T1: \n");
    input(&t1);

    printf("Enter for time T2: \n");
    input(&t2);

    struct time timeDiff = {
        abs(t1.hours - t2.hours),
        abs(t1.mins - t2.mins),
        abs(t1.seconds - t2.seconds)};

    printf("Time difference: [%d : %d : %d] -  ", t1.hours, t1.mins, t1.seconds);
    printf("[%d : %d : %d] =  ", t2.hours, t2.mins, t2.seconds);
    printf("[%d : %d : %d]", timeDiff.hours, timeDiff.mins, timeDiff.seconds);

    return 0;

}