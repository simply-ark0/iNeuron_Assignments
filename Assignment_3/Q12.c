#include<stdio.h>
int main(){

    char c;
    printf("Enter a charater: ");
    scanf("%c", &c);

    int n = c;

    if(n>=65 && n<=90)
        printf("Given alphabet is in UPPERCASE");
    else if(n>=97 && n<=122)
        printf("Given alphabet is in lowercase");
    else
        printf("Other charater");

    return 0;

}