#include<stdio.h>

void countVowels(char* str){
    int i=0, count = 0;
    while(str[i] != '\0'){
        if ((str[i] == 'A') || (str[i] == 'a') || (str[i] == 'E') ||
            (str[i] == 'e') || (str[i] == 'I') || (str[i] == 'i') ||
            (str[i] == 'O') || (str[i] == 'o') || (str[i] == 'U') ||
            (str[i] == 'u'))
            count++;
    }

    printf("NUmber of vowels in %s = %d\n", str, count);
}

int main(){
    char strArr[5][100];

    for(int i=0; i<5; i++){
        printf("Enter string %d: ", i+1);
        fgets(strArr[i], 100, stdin);
    }

    printf("Bug");

    for(int i=0; i<5; i++)
        countVowels(strArr[i]);

    return 0;
}