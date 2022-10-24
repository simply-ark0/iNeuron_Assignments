#include<stdio.h>
#include<string.h>

int serach(int r, int c, char arr[r][c], char* str) {
    for(int i=0; i<r; i++)
        if(strcmp(arr[i], str) == 0)
            return i;

    return -1;
}

int main(){
    int n;
    printf("Enter no. of strings to give input: ");
    scanf("%d", &n);
    fflush(stdin);
    char strArr[n][100];

    for (int i = 0; i < n; i++) {
        printf("Enter String %d: ", i + 1);
        fgets(strArr[i], 100, stdin);
    }

    char str[100];
    printf("Enter String to be seached: ");
    fgets(str, 100, stdin);

    int index = serach(n, 100, strArr, str);
    (index == -1)
        ? printf("Given String is not present in list of strings.")
        : printf("Given String is present in list of strings at index %d.", index);

        return 0;
}