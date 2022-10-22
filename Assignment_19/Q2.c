#include<stdio.h>
#include<string.h>

int stringLen(char *str){
    int i = 0;
    while(str[i])
        i++;

    return i;
}

int main(){
    int n;
    printf("Enter number of strings to input: ");
    scanf("%d", &n);
    char strArr[n][100];
    fflush(stdin);

    for(int i=0; i<n; i++){
        printf("Enter city for index %d: ", i);
        fgets(strArr[i], 100, stdin);
        strArr[i][stringLen(strArr[i])-1] = '\0';
    }

    for(int i=0; i<n; i++){
        printf("%s, ", strArr[i]);
    }

    printf("\n");

    // Bubble sort
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1; j++){
            if(strcmp(strArr[j], strArr[j+1])>0){
                char temp[100];
                strcpy(temp, strArr[j]);
                strcpy(strArr[j], strArr[j+1]);
                strcpy(strArr[j+1], temp);
            }
        }

    for(int i=0; i<n; i++){
        printf("%s, ", strArr[i]);
    }

    return 0;
}