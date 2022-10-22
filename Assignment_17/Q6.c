#include<stdio.h>

int stringLen(char* str){
    int i=0;
    while(str[i]!='\0')
        i++;

    return i-1;
}

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

char* revStr(char* str){
    int j = stringLen(str) - 1;
    for(int i=0; i<stringLen(str)/2; i++){
        swap(&str[i], &str[j]);
        j--;
    }

    return str;
    
}

int main(){
    char str[100];
    printf("Input String: ");
    fgets(str, 100, stdin);

    printf("Rerverse of input string = %s", revStr(str));

    return 0;
}