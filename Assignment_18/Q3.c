#include<stdio.h>

int stringLen(char* str){
    int i=0;
    while(str[i]!='\0')
        i++;

    return i-1;
}

void compare(char* str1, char* str2){
    if(stringLen(str1) != stringLen(str2)){
        printf("Given Strings are not equal in length");
        return;
    }

    for(int i=0; i<stringLen(str1); i++)
        if(str1[i] != str2[i]){
            printf("Given strings are equal in length but not same");
            return;
        }

    printf("Both the i/p strings, str1 and str2 are equal in length and same!");
}

int main(){
    char str1[100], str2[100];
    printf("Enter your str1: ");
    fgets(str1, 100, stdin);

    printf("Enter your str2: ");
    fgets(str2, 100, stdin);

    compare(str1, str2);

    return 0;
}