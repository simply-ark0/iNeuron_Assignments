#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

int partition(int* arr, int lb, int ub){
    int pivot = arr[0];
    int start = lb;
    int end = ub;

    while(start<end){
        while(arr[start]<=pivot)
            start++;
        while(arr[end]>pivot)
            end--;
        if(start<end)
            swap(&arr[start], &arr[end]);
    }
    swap(&arr[lb], &arr[end]);
    return end;
}

void quickSort(int* arr, int lb, int ub){
    if(lb<ub){
        int loc = partition(arr, lb, ub);
        quickSort(arr, lb, loc-1);
        quickSort(arr, loc+1, ub);
    }
}

void printArray(int* arr, int n){
    for(int i=0; i<n; i++)
        printf("%d, ", arr[i]);
}

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    if(n==0){
        printf("Array size can't be 0");
        return 0;
    }
    int arr[n];
    printf("Enter %d values: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Array before sorting: ");
    printArray(arr, n);

    quickSort(arr, 0, n-1);

    printf("\nArray after sorting: ");
    printArray(arr, n);

    return 0;

}