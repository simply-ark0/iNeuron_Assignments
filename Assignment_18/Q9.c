#include<stdio.h>
#include<string.h>

struct rev{
    char revStr[100];
    int index;
};

int stringLen(char* str){
    int i=0;
    while(str[i])
        i++;

    return i;
}


void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(char *a, int size){
    for(int i=0; i<(size/2); i++)
        swap(&a[i], &a[size-1-i]);
}

void reset(char* str){
    int i=0;
    while(str[i])
        str[i++] = '\0';

}

void updateRev(char* str, struct rev *ptr){
    int size = stringLen(str);
    reverse(str, size);
    for(int i=0; i<size; i++)
        ptr->revStr[ptr->index++] = str[i];

    ptr->revStr[ptr->index++] = ' ';

}

void revByWord(char* str){
    struct rev revString = {{'\0'}, 0};

    char temp[100] = {'\0'};
    int i=0, j=0;
    while(str[i]){
        if(((int)str[i] == 32) && ((int)str[i-1]!=32)){
            updateRev(temp, &revString);
            reset(temp);
            j=0;
            i++;
        }
        else if(((int)str[i] == 32) && ((int)str[i-1]==32))   //multi-space between words handled
            i++;
        else{
            temp[j++] = str[i];
            i++;
        }
    }
    updateRev(temp, &revString);
    revString.revStr[(--revString.index)] = '\0';

    reverse(revString.revStr, revString.index);
    puts(revString.revStr);
}

int main(){
    char str[100];
    printf("Input String: ");
    fgets(str, 100, stdin);
    str[stringLen(str)-1] = '\0';

    revByWord(str);

    return 0;
}