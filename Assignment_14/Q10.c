#include<stdio.h>

int* copy(int* arr2, int* arr1){
    for(int i=0; i<=10; i++)
        arr2[i] = arr1[i];
    
    return arr2;
}

int main(){
    int arr1[10], arr2[10];
    printf("Enter 10 numbers: ");
    for(int i=0; i<10; i++)
        scanf("%d", &arr1[i]);

    printf("arr1: ");
    for(int i=0; i<10; i++)
        printf("%d, ", arr1[i]);
        
    copy(arr2, arr1);

    printf("\narr2: ");
    for(int i=0; i<10; i++)
        printf("%d, ", arr2[i]);

    return 0;
    
}