#include<stdio.h>
#include<stdlib.h>

int* declare(int n){
    int *ptr = (int*)malloc(n*sizeof(int));

    if(ptr == NULL)     // memory allcation failed!
        exit(EXIT_FAILURE);

    return ptr;
}

int large(int* arr, int n){
    int large = arr[0];
    for(int i=1; i<n; i++)
        if(arr[i]>large)
            large = arr[i];

    return large;
}

int small(int* arr, int n){
    int s = arr[0];
    for(int i=1; i<n; i++)
        if(arr[i]<s)
            s = arr[i];

    return s;
}

int main(){
    int n;
    printf("Enter number of data values you would like to enter: ");
    scanf("%d", &n);
    int *arr = declare(n);

    int sum = 0;
    for(int i=0; i<n; i++){
        printf("Enter data value %d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    free(arr);

    printf("Largest element of %d data values = %d\n", n, large(arr, n));
    printf("Smallest element of %d data values = %d\n", n, small(arr, n));

    return 0;

}