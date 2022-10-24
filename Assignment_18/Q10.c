#include<stdio.h>

int stringLen(char* str){
    int i=0;
    while(str[i]!='\0')
        i++;

    return i;
}

void printRepeat(char* str){
    // hashing
    int map[128] = {0};
    for(int i=0; str[i]; i++)
        map[str[i]]++;

    for(int i=0; i<128; i++)
        if(map[i]>1)
            printf("%c is repeated %d times\n", i, map[i]);
}

int main(){
    char str[100];
    printf("Input String: ");
    fgets(str, 100, stdin);
    str[stringLen(str)-1] = '\0';

    printRepeat(str);

    return 0;
}