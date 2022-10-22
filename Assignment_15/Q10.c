#include<stdio.h>

int max(int* arr, int size){
    int max = arr[0];
    for(int i=1; i<size; i++)
        if(arr[i]>max)
            max = arr[i];
    
    return max;
}

void count(int* arr, int size){
    int map[max(arr, size)+2];
    for(int i=0; i<max(arr, size)+2; i++)
        map[i] = 0;

    for(int i=0; i<size; i++)
        map[arr[i]]++;

    for(int i=0; i<size; i++)
        if(map[i]!=0)
            printf("Count of %d = %d\n", i, map[i]);
}

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    count(arr, n);

    return 0;

}