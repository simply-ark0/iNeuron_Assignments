#include<stdio.h>
int main(){
    char c;
    printf("Enter a charater: ");
    scanf("%c",&c);
    printf("ASCII value of %c is %d", c, (int)c);

    return 0;
}