#include<stdio.h>

int stringLen(char* str){
    int i=0;
    while(str[i]!='\0')
        i++;

    return i-1;
}

short isPalindrome(char* str){
    int j = stringLen(str)-1;
    for(int i=0; i<stringLen(str)/2; i++){
        if(str[i] != str[j])
            return 0;
        j--;
    }

    return 1;
}

int main(){
    char str[100];
    printf("Input String: ");
    fgets(str, 100, stdin);

    (isPalindrome(str))?printf("Given String is Palindrome"):printf("Given String is not Palindrome");

    return 0;
}