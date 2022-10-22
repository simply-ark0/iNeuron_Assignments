#include<stdio.h>

int countOccr(char* str, char c){
    int i=0, count = 0;
    while(str[i] != '\0'){
        if(str[i] == c)
            count++;
        i++;
    }

    return count;
}

int main(){
    char str[100], c;
    printf("Input String: ");
    fgets(str, 100, stdin);

    printf("Input charater: ");
    scanf("%c", &c);

    printf("Count of %c in %s = %d", c, str, countOccr(str, c));

    return 0;
}