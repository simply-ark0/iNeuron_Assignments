#include<stdio.h>

int stringLen(char* str){
    int i=0;
    while(str[i]!='\0')
        i++;

    return i-1;
}

void check(char c, int *countAplh, int *countNum){
    if(c>=48 && c<=57)
        *countNum = 1;
    else if((c>=65 && c<=90) || (c>=97 && c<=122))
        *countAplh = 1;
}

short isAlphaNum(char* str){
    int countAplh = 0, countNum = 0;
    for(int i=0; i<stringLen(str); i++){
        check(str[i], &countAplh, &countNum);
        if(countAplh && countNum)
            return 1;
    }

    return 0;
}


int main(){
    char str[100];
    printf("Input String: ");
    fgets(str, 100, stdin);

    (isAlphaNum(str))?printf("Given String is Alpha-Numerical"):printf("Given String is not Alpha-Numerical");

    return 0;
}