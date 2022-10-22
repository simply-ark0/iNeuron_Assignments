#include<stdio.h>
int main(){

    char str[100]; 

    printf("Enter the string: ");
    scanf("%s", str);
    int len = printf("%s", str);
    printf("\n");
    printf("Length of string is %d", len);

    return 0;

}