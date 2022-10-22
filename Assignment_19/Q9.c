#include<stdio.h>
#include<string.h>

int fact(int n){
    if((n == 0) || (n == 1))
        return 1;
    
    return n*fact(n-1);
}

int main(){
    char usreDB[10][50] = {"Arun", "Arko", "Mia", "Sam", "George", "Anika", "Roxane", "Stacy", "Rose", "Micheal"};

    printf("Enter name: ");
    char name[50];
    fgets(name, 50, stdin);
    name[strlen(name)-1] = '\0';

    int auth = 0;
    for(int i=0; i<10; i++)
        if(strcmp(usreDB[i], name) == 0)
            auth = 1;
    
    if(auth){
        int n;
        printf("Enter number: ");
        scanf("%d", &n);
        printf("Factorial of %d = %d", n, fact(n));
    }
    else
        printf("ERROR, entered name is not the DB");

    return 0;
        
}