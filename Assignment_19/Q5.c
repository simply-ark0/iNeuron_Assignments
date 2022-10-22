#include<stdio.h>

int verify(char* str){
    int i=0;
    while(str[i]!='\0'){
        if(str[i] == '@')
            return 1;
        i++;
    }

    return 0;
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


    for(int i=0; i<n; i++)
        if(!verify(strArr[i]))
            printf("Email at index %d is odd.\n", i);

    return 0;
}