#include<stdio.h>

int strLength(char* str){
    int i=0;
    while(str[i])
        i++;

    return i;
}

void input(char* str){
   fflush(stdin);
   fgets(str, 100, stdin); 
   str[strLength(str)-1] = '\0';
}

// void swap(char* a, char* b) {
//     *a = *a ^ *b;
//     *b = *a ^ *b;
//     *a = *a ^ *b;
// }


// void swapStr(char* str1, char* str2){
//     int i=0;
//     while(str1[i] && str2[i]){
//         swap(&str1[i], &str2[i]);
//         i++;
//     }
//     if(str1[i]!='\0'){
//         while(str1[i]){
//             str2[i] = str1[i];
//             str1[i] = '\0';
//             i++;
//         }
//         str2[i] = '\0';
//     }
//     else if(str2[i]!='\0'){
//         while(str2[i]){
//             str1[i] = str2[i];
//             str2[i] = '\0';
//             i++;
//         }
//         str1[i] = '\0';
//     }

// }

void swapStr(char **str1, char **str2){
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

int main(){
    char str1[100], str2[100];

    printf("Enter String1: ");
    input(str1);

    printf("Enter String2: ");
    input(str2);

    printf("Before swap:\nString1: ");
    puts(str1);
    printf("String2: ");
    puts(str2);

    char *ptr1 = str1;
    char *ptr2 = str2;

    swapStr(&ptr1, &ptr2);

    printf("After swap:\nString1: ");
    puts(ptr1);
    printf("String2: ");
    puts(ptr2);

    return 0;
}