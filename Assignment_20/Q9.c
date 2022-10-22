#include<stdio.h>

void printRev(int* arr, int size){
    printf("[");
    for(int i=size-1; i>=0; i--)
        if(i==0)
            printf("%d]", arr[i]);
        else
            printf("%d ", arr[i]);

    printf("\n");
}

int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d numbers separated by spaces:\n", size);
    for(int i=0; i<size; i++)
        scanf("%d", &arr[i]);

    printf("Array in reverse:\n");
    printRev(arr, size);

    return 0;
}