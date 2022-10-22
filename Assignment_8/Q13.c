#include<stdio.h>
int main(){
    for(int i=7; i>=1; i--){
        char c = 'A';

        for(int j=1; j<=i; j++){
            if(j==7)
                printf("%c ", c);
            else
                printf("%c ", c++);
        }
            

        for(int k=1; k<=2*(7-i)-1; k++)
            printf("  ");

        for(int k=i; k>=1; k--){
            if(k==7)
                k--;
            printf("%c ", --c);
        }

        printf("\n");

    }

    return 0;
}