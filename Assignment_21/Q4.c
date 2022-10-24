#include<stdio.h>
#include "Q3.c"

int highestSalary(struct employee ptr[], int size){
    int index = 0;
    for(int i=1; i<size; i++)
        if(ptr[i].salary > ptr[index].salary)
            index = i;

    return index;
}