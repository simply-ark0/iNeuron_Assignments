#include<stdio.h>

int stringLen(char* str){
    int i=0;
    while(str[i]!='\0')
        i++;

    return i-1;
}

int countAlphabets(char* str){
    int count = 0;
    for(int i=0; i<stringLen(str); i++)
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
            count++;

    return count;
}

int countDigits(char* str){
    int count = 0;
    for(int i=0; i<stringLen(str); i++)
        if(str[i]>=48 && str[i]<=57)
            count++;

    return count;
}

int countSpecialChar(char* str){
    int count = 0;
    for(int i=0; i<stringLen(str); i++)
        if ((str[i] >= 33 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) ||
            (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))
            count++;

    return count;
}

int main(){
    char str[100];
    printf("Input String: ");
    fgets(str, 100, stdin);

    printf("Count of alphabets in the given string = %d\n", countAlphabets(str));
    printf("Count of digits in the given string = %d\n", countDigits(str));
    printf("Count of Special Characters in the given string = %d\n", countSpecialChar(str));


    return 0;
}