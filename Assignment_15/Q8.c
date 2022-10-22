#include<stdio.h>

void swap(int *a, int *b){

    *a = (*a) * (*b);
    *b = (*a) / (*b);
    *a = (*a) / (*b);

}

int partition(int* arr, int lb, int ub){
    int pivot = arr[lb];
    int start = lb;
    int end  = ub;

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

void QuickSort(int* arr, int lb, int ub){
    if(lb<ub){
        int loc = partition(arr, lb, ub);
        QuickSort(arr, lb, loc-1);
        QuickSort(arr, loc+1, ub);
    }
}

void unique(int* arr, int size){
    
    QuickSort(arr, 0, size-1);
    
    for(int i=0; i<size-1; i++)
        if(arr[i] != arr[i+1])
            printf("%d, ", arr[i]);
    printf("%d", arr[size-1]);

}


int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    if(n == 0){
        printf("Array size can't be 0");
        return 0;
    }

    int arr[n];
    printf("Enter %d numbers: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Unique elements in the array: ");
    unique(arr, n);


    return 0;
}