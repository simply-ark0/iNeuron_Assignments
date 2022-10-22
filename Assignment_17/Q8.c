#include<stdio.h>

int main(){
    char str1[100], str2[100];
    printf("Enter String (str1): ");
    fgets(str1, 100, stdin);

    int i = 0;
    while(str1[i]!='\0'){
        str2[i] = str1[i];
        i++;
    }

    printf("Copied string (str2): %s", str2);

    return 0;
}