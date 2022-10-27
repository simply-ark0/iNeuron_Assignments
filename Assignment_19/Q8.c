#include<stdio.h>
#include<string.h>
#include<stdlib.h>

short search(int r, int c, char arr[r][c], char* str){
    int index = -1;
    for(int i=0; i<r; i++)
        if(strcmp(arr[i], str) == 0)
            index = i;;
    
    return index;
}

short minDistance(int r, int c, char arr[r][c], char* word1, char* word2){
    int w1 = search(r, c, arr, word1);
    int w2 = search(r, c, arr, word2);

    if(w1==-1 || w2==-1){
        printf("Error! Either or both words does not exist in the list.");
        return 0;
    }

    int d1 = abs(w1-w2) - 1;
    int d2 = r - (d1 + 2);  // considering circular list (as per the example provided)

    return (d1>=d2)?d2:d1;
}

int main(){
    int n;
    printf("Enter number of strings to give input: ");
    scanf("%d", &n);
    fflush(stdin);
    char arr[n][100];

    for(int i=0; i<n; i++){
        printf("Enter string %d: ", i+1);
        fgets(arr[i], 100, stdin);
        arr[i][strlen(arr[i])-1] = '\0';
    }

    char word1[100], word2[100];
    printf("Enter word1: ");
    fgets(word1, 100, stdin);
    word1[strlen(word1)-1] = '\0';


    printf("Enter word2: ");
    fgets(word2, 100, stdin);
    word2[strlen(word2)-1] = '\0';

    printf("Minimum distance between \"%s\" and \"%s\" = %d", word1, word2, minDistance(n, 100, arr, word1, word2));

    return 0;
}