#include<stdio.h>

int stringLen(char* str){
    int i=0;
    while(str[i]!='\0')
        i++;

    return i-1;
}


char* toUpr(char* str){
    for(int i=0; i<stringLen(str); i++)
        str[i] -= 32;

    return str;
}

int main(){
    char str[100];
    printf("Input String (in lowercase): ");
    fgets(str, 100, stdin);

    printf("Given String in uppercase of %s", toUpr(str));

    return 0;
}