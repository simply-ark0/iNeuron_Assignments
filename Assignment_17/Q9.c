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

int main(){
    char str[100];
    printf("Input String: ");
    fgets(str, 100, stdin);

    printf("String before sorting: %s", str);
    sortStr(str);
    printf("String after sorting: %s", str);

    return 0;
}