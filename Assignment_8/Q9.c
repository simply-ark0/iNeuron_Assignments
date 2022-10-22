#include<stdio.h>

int main(){
    for(int i=4; i>=1; i--){
        int n=1;

        for(int k=1; k<=4-i; k++){
            printf(" ");
        }

        for(int j=1; j<=2*i-1; j++){
            if(j<i)
                printf("%d", n++);
            else if(j==i)
                printf("%d", n);
            else
                printf("%d", --n);
        }
        

        printf("\n");
    }

    return 0;

}