#include<stdio.h>

struct cnt{
    int Vcnt;
    int total;
};

int strLength(char* str){
    int i=0;
    while(str[i])
        i++;

    return i;
}

void intput(char *str){
    fflush(stdin);
    fgets(str, 100, stdin);
    str[strLength(str)-1] = '\0';
}

struct cnt* Vcount(char* str, struct cnt *ptr){
    int i=0;
    while(str[i]){
        if ((str[i] == 'A') || (str[i] == 'a') || (str[i] == 'E') || (str[i] == 'e') || (str[i] == 'I') || 
            (str[i] == 'i') || (str[i] == 'O') || (str[i] == 'o') || (str[i] == 'U') || (str[i] == 'u'))
            ptr->Vcnt++;
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
            ptr->total++;
        i++;
    }

    return ptr;
}



int main(){
    char str[100];
    struct cnt count = {0, 0};

    printf("Enter string: ");
    intput(str);

    printf("Length: %d", strLength(str));

    struct cnt *ptr = Vcount(str, &count);
    printf("Number of vowels in given string: %d\n", ptr->Vcnt);
    printf("Number of Consonents in given string: %d\n", (ptr->total - ptr->Vcnt));


    return 0;
}