#include<stdio.h>

void rev(int* arr, int n){
    for(int i=n-1; i>=0; i--)
        printf("%d, ", arr[i]);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d numbers: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Array in given order: ");
    for(int i=0; i<n; i++)
        printf("%d, ", arr[i]);


    printf("\nArray in reverse order: ");
    rev(arr, n);

    return 0;
}