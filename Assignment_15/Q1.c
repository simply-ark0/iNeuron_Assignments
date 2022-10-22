#include<stdio.h>

int largest(int* arr, int n){
    int lar = arr[0];
    for(int i=1; i<n; i++)
        if(arr[i]>lar)
            lar = arr[i];

    return lar;
}

int main(){
    int n, arr[n];
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d values: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Largest out of %d numbers = %d", n, largest(arr, n));

    return 0;
}