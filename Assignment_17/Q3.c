#include<stdio.h>

int stringLen(char* str){
    int i=0;
    while(str[i]!='\0')
        i++;

    return i-1;
}

int isVowel(char c){
    char vowel[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    for(int i=0; i<stringLen(vowel); i++)
        if(vowel[i] == c)
            return 1;
    
    return 0;
}

int countVowels(char* str){
    int count = 0;
    for(int i=0; i<stringLen(str); i++)
        if(isVowel(str[i]))
            count++;
    
    return count;

}

int main(){
    char str[100], c;
    printf("Input String: ");
    fgets(str, 100, stdin);

    printf("Vowels in the string \"%s\b\" = %d", str, countVowels(str));

    return 0;
}