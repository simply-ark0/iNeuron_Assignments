#include<stdio.h>
#include<stdlib.h>

int main(){
    char *str = (char*)malloc(sizeof(char));
    int len = 0;
    char c;
    printf("Input Text: ");
    while(scanf("%c", &c)){
        if(c == '\n')
            break;
        str = realloc(str, len+1);
        str[len] = c;
        str[++len] = '\0';
    }

    printf("Inputed Text: ");
    puts(str);

    free(str);

    return 0;

}