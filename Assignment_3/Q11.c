#include<stdio.h>
int main(){

    int m;
    printf("Enter marks: ");
    scanf("%d", &m);

    if(m>100){
        printf("Invalid entry!");
        return 0;
    }

    (m<33)?printf("The candidate has failed the exam"):printf("The candidate has passed the exam");

    return 0;

}