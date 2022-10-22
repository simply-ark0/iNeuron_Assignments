#include<stdio.h>

int stringLen(char* str){
    int i=0;
    while(str[i]!='\0')
        i++;

    return i-1;
}

void sort(char* str){

    // insertion sort
   for(int i=0; i<stringLen(str); i++){
        char temp = str[i];
        int j = i-1;
        while(j>=0 && str[j]>temp){
            str[j+1] = str[j];
            j--;
        }
        str[j+1] = temp;
   }
    
}

void printRepeat(char* str){
    sort(str);
    int count = 1;
    for(int i=0; i<stringLen(str)-1; i++)
       if(str[i] == str[i+1])
           count++;
        else{
            if(count!=1)
                printf("%c is repeated %d times.\n", str[i], count);
            count = 1;
        }
    if(str[stringLen(str)-1] == str[stringLen(str)-2])
        printf("%c is repeated %d times.\n", str[stringLen(str)-1], count);
        
}

int main(){
    char str[100];
    printf("Input String: ");
    fgets(str, 100, stdin);

    printRepeat(str);

    return 0;
}