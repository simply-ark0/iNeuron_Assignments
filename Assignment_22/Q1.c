#include<stdio.h>
#include<stdlib.h>

int main(){
    char *str = (char*)malloc(sizeof(char));
    char t;
    int len = 0;
    while(scanf("%c", &t)){
        if(t == '\n')
            break;
        str = realloc(str, len+1);
        str[len] = t;
        str[len+1] = '\0';
        len++;
    }

    puts(str);
    printf("%d\n", len);

    return 0;
}