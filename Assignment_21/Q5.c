#include<stdio.h>
#include "Q4.c"

void swap(struct employee *a, struct employee *b){
    struct employee temp = *a;
    *a = *b;
    *b = temp;
}

void salarySort(struct employee *ptr, int size){
    // Bubble Sort:
    for(int i=0; i<size-1; i++)
        for(int j=0; j<size-1-i; j++)
            if(ptr[j].salary>ptr[j+1].salary)
                swap(&ptr[j], &ptr[j+1]);
}