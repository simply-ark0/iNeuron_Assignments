#include<stdio.h>

int stringLen(char* str){
    int i=0;
    while(str[i])
        i++;

    return i;
}

short isPalindrome(char* str){
    int len = stringLen(str);
    for(int i=0; i<len/2; i++)
        if(str[i] != str[len-1-i])
            return 0;

    return 1;
}

int main(){
    char str[100];
    printf("Input String: ");
    fgets(str, 100, stdin);
    str[stringLen(str)-1] = '\0';

    (isPalindrome(str))?printf("Given String is Palindrome"):printf("Given String is not Palindrome");

    return 0;
}