#include<stdio.h>

int stringLen(char* str){
    int i=0;
    while(str[i]!='\0')
        i++;

    return i;
}

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void printRev(char* str){
    int j = stringLen(str)-1;
    for(int i=0; i<(stringLen(str)+1)/2; i++){
        swap(&str[i], &str[j]);
        j--;
    }

    printf("%s ", str);

}

void revByWord(char* str){
    int i = stringLen(str)-2;
    while(i>=0){
        int j = 0;
        char temp[100];
        while(str[i]!=32)
            temp[j++] = str[i--];
        temp[j] = '\0';
        printRev(temp);
        i--;
    }
}

int main(){
    char str[100];
    printf("Input String: ");
    fgets(str, 100, stdin);

    revByWord(str);

    return 0;
}