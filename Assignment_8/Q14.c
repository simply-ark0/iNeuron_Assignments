#include<stdio.h>
int main(){
    for(int i=1; i<=5; i++){
        if(i==5)
            for(int j=1; j<=i;j++){
                printf("* ");
            }
        else
            for(int j=1; j<=i; j++){
                if(j==1 || j==i)
                    printf("* ");
                else
                    printf("  ");
            }
        printf("\n");
    }
}