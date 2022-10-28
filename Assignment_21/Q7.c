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

void swap(struct time* t1, struct time* t2){
    struct time temp = *t1;
    *t1 =  *t2;
    *t2 = temp;
}

struct time *diff(struct time T1, struct time T2) {
    
    struct time *timeDiff = (struct time *)malloc(sizeof(struct time));

    if(T1.hours>T2.hours)
        swap(&T1, &T2);

    short flagSEC = 0, flagMIN = 0;

    if(T2.seconds < T1.seconds){
        timeDiff->seconds = 60 + (T2.seconds - T1.seconds);
        flagSEC = 1;
    }
    else
        timeDiff->seconds = T2.seconds - T1.seconds;

    if(T2.mins < T1.mins){
        timeDiff->mins = 60 + (T2.mins - T1.mins);
        flagMIN = 1;
    }
    else
        timeDiff->mins = T2.mins - T1.mins;

    if(flagSEC)
        timeDiff->mins--;

    timeDiff->hours = T2.hours - T1.hours;
    if(flagMIN)
        timeDiff->hours--;
    


    return timeDiff;
}

int main(){
    struct time t1;
    struct time t2;

    printf("Enter for time T1: \n");
    input(&t1);

    printf("Enter for time T2: \n");
    input(&t2);

    struct time *timeDiff = diff(t1, t2);

    printf("Time difference: [%d : %d : %d] -  ", t1.hours, t1.mins, t1.seconds);
    printf("[%d : %d : %d] =  ", t2.hours, t2.mins, t2.seconds);
    printf("[%d : %d : %d]", timeDiff->hours, timeDiff->mins, timeDiff->seconds);

    return 0;

}