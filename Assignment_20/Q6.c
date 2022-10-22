#include<stdio.h>

int strLen(char *str){
    int i=0;
    while(str[i])
        i++;

    return i-1; // as fgets() also takes the enter sequence from the i/p buffer!
}

int main(){
    char str[100];
    printf("Enter String: ");
    fgets(str, 100, stdin);

    printf("Length of given string = %d", strLen(str));

    return 0;
}