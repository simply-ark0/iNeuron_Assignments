#include<stdio.h>
#include<string.h>
#include "Q5.c"

void nameSort(struct employee *ptr, int size){
    // Bubble sort:
    for(int i=0; i<size-1; i++)
        for(int j=0; j<size-1-i; j++)
            if(strcmp(ptr[j].name, ptr[j+1].name)>0)
                swap(&ptr[j], &ptr[j+1]);
}