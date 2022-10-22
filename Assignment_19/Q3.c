#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter no. of strings to give input: ");
    scanf("%d", &n);
    fflush(stdin);    
    char str[n][100];

    for(int i=0; i<n; i++){
        printf("Enter String %d: ", i+1);
        fgets(str[i], 100, stdin);
    }

    for(int i=0; i<n; i++){
        printf("String %d: ", i+1);
        printf("%s", str[i]);
    }

    return 0;
}