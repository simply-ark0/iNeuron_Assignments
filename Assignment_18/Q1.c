#include<stdio.h>

int stringLen(char* str){
    int i=0;
    while(str[i]!='\0')
        i++;

    return i-1;
}

int main(){
    char str[100];
    printf("Enter your string: ");
    fgets(str, 100, stdin);

    printf("Lenght of %s = %d", str, stringLen(str));

    return 0;
}