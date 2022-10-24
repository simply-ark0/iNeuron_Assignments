#include<stdio.h>
#include "Q1.c"

int strLength(char* str){
    int i=0;
    while(str[i])
        i++;

    return i;
}

void input(struct employee *ptr, int size){

    for(int i=0; i<size; i++){
        printf("Enter details of Employee %d:\n", i+1);
        printf("Enter id: ");
        scanf("%d", &ptr[i].id);

        fflush(stdin);
        printf("Enter name: ");
        fgets(ptr[i].name, 100, stdin);
        ptr[i].name[strLength(ptr[i].name) - 1] = '\0';

        printf("Enter salary: ");
        scanf("%d", &ptr[i].salary);

        printf("\n");
    }
}