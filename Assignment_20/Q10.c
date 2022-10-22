#include<stdio.h>

int strLength(char* str){
    int i=0;
    while(str[i])
        i++;

    return i;
}

void input(char* str){
    fflush(stdin);
    fgets(str, 100, stdin);
    str[strLength(str)-1] = '\0';
}

void swap(char *a, char *b){
    if(*a == *b)
        return;
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void printRev(char* str){
    int len = strLength(str);
    for(int i=0; i<=(len/2); i++)
        swap(&str[i], &str[len-i-1]);

    puts(str);

}

int main(){
    char str[100];
    printf("Enter string: ");
    input(str);

    printf("Normal String: ");
    puts(str);

    printf("Reversed String: ");
    printRev(str);

    return 0;
}