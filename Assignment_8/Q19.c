#include<stdio.h>
int main(){
    for(int i=3; i<=5; i++){
        for(int j=1; j<=5-i; j++)
            printf(" ");
        for(int j=1; j<=2*i-1; j++)
            printf("*");
        for(int k=1; k<=2*(6-i)-1; k++)
            printf(" ");
        for(int j=1; j<=2*i-1; j++)
            printf("*");
        printf("\n");
        
    }

    for(int i=1; i<=19; i++)
        if(i==7){
            printf("MySirG");
            i = 12;
        }
        else
            printf("*");
    printf("\n");

    for(int i=9; i>=1; i--){
        for(int k=1; k<=10-i; k++)
            printf(" ");
        for(int j=1; j<=2*i-1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}