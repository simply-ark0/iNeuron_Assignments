#include<stdio.h>

int largest(int* arr, int n){
    int small = arr[0];
    for(int i=1; i<n; i++)
        if(arr[i]<small)
            small = arr[i];

    return small;
}

int main(){
    int n, arr[n];
    printf("Enter size of array: ");
    scanf("%d", &n);

    if(n==0){
        printf("Array size can't be zero");
        return 0;
    }

    printf("Enter %d values: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Smallest out of %d numbers = %d", n, largest(arr, n));

    return 0;
}