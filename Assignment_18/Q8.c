#include<stdio.h>

int stringLen(char* str){
    int i=0;
    while(str[i]!='\0')
        i++;

    return i-1;
}

int countWords(char* str){
    int count = 0;
    for(int i=0; i<stringLen(str); i++)
        if(str[i] == 32)
            count++;
    
    return count+1;
}

int main(){
    char str[100];
    printf("Input String: ");
    fgets(str, 100, stdin);

    printf("No. of words in the given string = %d", countWords(str));

    return 0;
}