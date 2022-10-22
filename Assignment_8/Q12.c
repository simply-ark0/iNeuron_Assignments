#include<stdio.h>
int main(){
    for(int i=4; i>=1; i--){
        char c = 'A';

        for(int k=1; k<=4-i; k++)
            printf("  ");

        for(int j=1; j<=2*i-1; j++){
            if(j<i)
                printf("%c ", c++);
            else if(j==i)
                printf("%c ", c);
            else
                printf("%c ", --c);
        }

       printf("\n");
    }

    return 0;
}