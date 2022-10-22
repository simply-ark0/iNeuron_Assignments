#include<stdio.h>
int main(){
    for(int i=5; i>=1; i--){
        for(int j=1; j<i; j++)
            printf("  ");

        if(i==1)
            for(int k=1; k<=6-i; k++)
                printf("* ");
        else
            for(int k=1; k<=6-i; k++){
                if(k==1 || k==6-i)
                    printf("* ");
                else
                    printf("  ");
            }

        printf("\n");
    }

    return 0;
}