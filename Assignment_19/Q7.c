#include<stdio.h>
#include<string.h>

int stringLen(char* str){
    int i=0;
    while(str[i] != '\0')
        i++;

    return i-1;
}

short checkIPV4(char* str){
    char *token = strtok(str, ".");
    while(token){
        int num = 0, i = 0;
        while(token[i]){
            num = num*10 + (token[i++]-48);
        }
        if((token[0] == 48) && (num!=0))
            return 0;
        if(!(num>=0 && num<=255))
            return 0;
        token = strtok(NULL, ".");
    }
    return 1;
}

short checkIPV6(char* str){
    char *token = strtok(str, ":");
    while(token){
        int len = 0, i = 0;
        while(token[i]){
            if(!((token[i]>=65 && token[i]<=90) || (token[i]>=97 && token[i]<=122) || (token[i]>=48 && token[i]<=57)))
                return 0;
            len++;
            i++;
        }
        if(len>4 || len<1)
            return 0;
        token = strtok(NULL, ":");
    }
    return 1;
}

short validateIP(char* str){
    int i=0, count = 0;
    while(str[i]!='\0'){
        if((str[i]==':') || (str[i]=='.'))
            count++;
        i++;
    }
    //printf("%d\n", count);
    if(count == 3)
        return checkIPV4(str);
    else if(count == 7)
        return checkIPV6(str);
    else
        return 0;

}

int main(){
    int n;
    printf("Enter no. of IP strings to give input: ");
    scanf("%d", &n);
    fflush(stdin);
    char strArr[n][100];

    for (int i = 0; i < n; i++) {
        printf("Enter IP %d: ", i + 1);
        fgets(strArr[i], 100, stdin);
        strArr[i][stringLen(strArr[i])] = '\0';
    }

    for(int i=0; i<n; i++)
        (validateIP(strArr[i])) ? printf("IP of index %d is valid\n", i)
                                : printf("IP of index %d is not valid\n", i);

    return 0;
}