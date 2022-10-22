#include<stdio.h>

// void swap(int *a, int *b){

//     *a = (*a) * (*b);
//     *b = (*a) / (*b);
//     *a = (*a) / (*b);

// }

// int partition(int* arr, int lb, int ub){
//     int pivot = arr[lb];
//     int start = lb;
//     int end  = ub;

//     while(start<end){
//         while(arr[start]<=pivot)
//             start++;
//         while(arr[end]>pivot)
//             end--;
//         if(start<end)    
//             swap(&arr[start], &arr[end]);
//     }
    
//     swap(&arr[lb], &arr[end]);
//     return end;

// }

// void QuickSort(int* arr, int lb, int ub){
//     if(lb<ub){
//         int loc = partition(arr, lb, ub);
//         QuickSort(arr, lb, loc-1);
//         QuickSort(arr, loc+1, ub);
//     }
// }

// int countDupl(int* arr, int size){
    
//     QuickSort(arr, 0, size-1);

//     int count = 0, prev;
//     for(int i=0; i<size-1; i++)
//         if(arr[i] == arr[i+1] && arr[i] != prev){
//             count++;
//             prev = arr[i];
//         }

//     return count;
// }

int max(int* arr, int size){
    int max = arr[0];
    for(int i=1; i<size; i++)
        if(arr[i]>max)
            max = arr[i];
    
    return max;
}

int countDupl(int* arr, int size){
    // int count = 0;
    // for(int i=0; i<size-1; i++)
    //     for(int j=i+1; j<size; j++)
    //         if(arr[i] == arr[j])
    //             count++;
    
    // return count;

    // Hashing concept:
    int map[max(arr, size)+2];
    for(int i=0; i<max(arr, size)+2; i++)
        map[i] = 0;

    for(int i=0; i<size; i++)
        map[arr[i]]++;

    int count=0;
    for(int i=0; i<size; i++)
        if(map[i] == 2)
            count++;
    
    return count;

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

    printf("Total number of duplicate elements = %d", countDupl(arr, n));

    return 0;
}