#include<stdio.h>

int stringlen(char* str){
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

void sortStr(char* str){
    int n = stringlen(str);
    for(int i=0; i<n-1; i++){
        int flag = 0;
        for(int j=0; j<n-i-1; j++)
            if(str[j]>str[j+1]){
                swap(&str[j], &str[j+1]);
                flag = 1;
            }
        if(flag==0)
            break;;
    }
}

void freq(char* str){
    sortStr(str);
    int count = 1;
    for(int i=0; i<stringlen(str)-1; i++)
        if(str[i] == str[i+1])
            count++;
        else{
            printf("Count of %c = %d\n", str[i], count);
            count = 1;
        }
    
    if(str[stringlen(str)-1] != str[stringlen(str)-2])
        printf("Count of %c = 1\n", str[stringlen(str)-1]);
}

int main(){
    char str[100];
    printf("Input String: ");
    fgets(str, 100, stdin);

    freq(str);

    return 0;
}