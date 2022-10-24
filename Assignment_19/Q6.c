#include<stdio.h>
#include<string.h>

int stringLen(char* str){
    int i=0;
    while(str[i])
        i++;

    return i;
}

short isPalindrome(char* str){
    int len = stringLen(str);
    for(int i=0; i<len/2; i++)
        if(str[i] != str[len-1-i])
            return 0;

    return 1;
}

int main(){
    int n;
    printf("Enter no. of strings to give input: ");
    scanf("%d", &n);
    fflush(stdin);
    char strArr[n][100];

    for (int i=0; i<n; i++) {
        printf("Enter String %d: ", i + 1);
        fgets(strArr[i], 100, stdin);
        strArr[i][stringLen(strArr[i])-1] = '\0';
    }
    printf("\n");

    for(int i=0; i<n; i++){
        if(isPalindrome(strArr[i]))
            printf("\"%s\" is Palindrome\n", strArr[i]);
    }

    return 0;
}