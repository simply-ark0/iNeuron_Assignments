#include<stdio.h>
int main(){
    for(int i=5; i>=1; i--){

        for(int k=1; k<=5-i; k++)
            printf("  ");
        if(i==5)
            for(int j=1; j<=2*i-1; j++)
                printf("* ");
        else
            for(int j=1; j<=2*i-1; j++){
                if(j==1 || j==2*i-1)
                    printf("* ");
                else
                    printf("  ");
            }

        printf("\n");
    }
}