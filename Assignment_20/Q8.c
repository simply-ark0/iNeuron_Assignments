#include<stdio.h>

int sum(int* arr, int size){
    int sum=0;
    for(int i=0; i<size; i++)
        sum += arr[i];
    
    return sum;
}

int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d numbers separated by spaces:\n", size);
    for(int i=0; i<size; i++)
        scanf("%d", &arr[i]);

    printf("Sum of all numbers in the array = %d", sum(arr, size));

    return 0;
}