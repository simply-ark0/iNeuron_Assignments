#include<stdio.h>
int main(){
    for(int i=1; i<=5; i++){
        char c = 'A';

        for(int j=5-i; j>=1; j--)
            printf("  ");
        for(int k=1; k<=2*i-1; k++){
            if(k<i)
                printf("%c ", c++);
            else if(k==i)
                printf("%c ", c);
            else
                printf("%c ", --c);
        }
        printf("\n");
    }

    return 0;
}