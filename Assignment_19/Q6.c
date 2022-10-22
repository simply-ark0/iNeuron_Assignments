#include<stdio.h>
#include<string.h>

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
    int j = stringLen(str)-1;
    for(int i=0; i<stringLen(str)/2; i++)
        swap(&str[i],&str[j--]);

    return str;
}

int main(){
    int n;
    printf("Enter no. of strings to give input: ");
    scanf("%d", &n);
    fflush(stdin);
    char strArr[n][100];

    for (int i = 0; i < n; i++) {
        printf("Enter String %d: ", i + 1);
        fgets(strArr[i], 100, stdin);
    }
        

    for(int i=0; i<n; i++){
        char org[100];
        strcpy(org, strArr[i]);
        (strcmp(org, revStr(strArr[i])) == 0)
            ? printf("String at index %d is palindrome\n", i)
            : printf("String at index %d is not palindrome\n", i);
    }

    return 0;
}