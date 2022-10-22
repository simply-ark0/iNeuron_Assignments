#include<stdio.h>

void swap(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void sort(int* arr, int size){
    for(int i=0; i<size-1; i++)
        for(int j=0; j<size-1-i; j++)
            if(arr[j]>arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

void printArr(int *arr, int size){
    printf("[");
    for(int i=0; i<size; i++)
        if(i==size-1)
            printf("%d]", arr[i]);
        else
            printf("%d, ", arr[i]);
    printf("\n");
}

int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements separated by space:\n", size);
    for(int i=0; i<size; i++)
        scanf("%d", &arr[i]);

    printf("Array before sorting: ");
    printArr(arr, size);

    sort(arr, size);

    printf("Array after sorting: ");
    printArr(arr, size);

    return 0;
}