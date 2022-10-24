#include<stdio.h>
#include "Q2.c"

void display(struct employee *ptr, int size){

    for(int i=0; i<size; i++){
        printf("Details of Employee %d:\n", i+1);
        printf("Id: %d", ptr[i].id);
        printf("\nEmployee name: ");
        puts(ptr[i].name);
        printf("Salary: %d\n\n", ptr[i].salary);
    }
}