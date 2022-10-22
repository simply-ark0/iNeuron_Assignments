#include<stdio.h>
int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=6-i; j++)
            printf("* ");
        for(int k=1; k<=2*i-2; k++)
            printf("  ");
        for(int j=1; j<=6-i; j++)
            printf("* ");
        printf("\n");
    }
}