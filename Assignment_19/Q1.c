#include<stdio.h>

int stringLen(char* str){
    int i=0;
    while(str[i])
        i++;

    return i;
}

void countVowels(char* str){
    int i=0, count = 0;
    while(str[i]){
        if ((str[i] == 'A') || (str[i] == 'a') || (str[i] == 'E') ||
            (str[i] == 'e') || (str[i] == 'I') || (str[i] == 'i') ||
            (str[i] == 'O') || (str[i] == 'o') || (str[i] == 'U') ||
            (str[i] == 'u'))
            count++;
        i++;
    }

    printf("\nNumber of vowels in \"%s\" = %d", str, count);
}

int main(){
    char strArr[5][100];

    for(int i=0; i<5; i++){
        printf("Enter string %d: ", i+1);
        fgets(strArr[i], 100, stdin);
        strArr[i][stringLen(strArr[i])-1] = '\0';
    }


    for(int i=0; i<5; i++)
        countVowels(strArr[i]);

    return 0;
}