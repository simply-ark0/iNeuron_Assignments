#include<stdio.h>

int stringlen(char* str){
    int i=0;
    while(str[i]!='\0')
        i++;

    return i;
}

void freq(char* str){
    int freqency[128] = {0};
    int i=0;
    while(str[i])
        freqency[(int)str[i++]]++;

    for(int i=0; i<128; i++)
        if(freqency[i]!=0)
            printf("Frequency of %c = %d\n", i, freqency[i]);
}

int main(){
    char str[100];
    printf("Input String: ");
    fgets(str, 100, stdin);
    str[stringlen(str)-1] = '\0';

    freq(str);

    return 0;
}