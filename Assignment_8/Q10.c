#include<stdio.h>
int main(){
    for(int i=4; i>=1; i--){
        int n=1;

        for(int j=1; j<=i; j++){
            if(j==4)
                printf("%d ", n);
            else
                printf("%d ", n++);
        }

        for(int k=1; k<=2*(4-i)-1; k++)
            printf("  ");

        for(int k=i; k>=1; k--){
            if(k==4){
                k--;
            }
            printf("%d ", --n);
        }

        printf("\n");
    }

    return 0;

}