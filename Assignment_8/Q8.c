#include<stdio.h>
int main(){
    for(int i=4; i>=1; i--){
        int n=1;
        for(int j=1; j<=i-1; j++)
            printf(" ");
        for(int k=1; k<=2*(5-i)-1; k++){
            if(k<5-i)
                printf("%d", n++);
            else if(k==5-i)
                printf("%d", n);
            else
                printf("%d", --n);
        }

        printf("\n");

    }

    return 0;
}