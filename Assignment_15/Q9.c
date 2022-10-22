#include<stdio.h>

void printArr(int* arr, int size){
    for(int i=0; i<size; i++)
        printf("%d, ", arr[i]);
}

void merge(int* arr1, int n1, int* arr2, int n2){
    int brr[n1+n2];
    int i=0, j=0, k=0;
    while(i<n1 && j<n2){
        if(arr1[i]>=arr2[j])
            brr[k++] = arr1[i++];
        else
            brr[k++] = arr2[j++];
    }
    if(i<n1)
        while(i<n1){
            brr[k] = arr1[i];
            i++; k++;
        }
    else if(j<n2)
        while(j<n2){
            brr[k] = arr2[j];
            j++; k++;
        }

    printArr(brr, n1+n2);
}

int main(){
    int n1;
    printf("Enter size of array_1: ");
    scanf("%d", &n1);
    
    int arr1[n1];
    printf("Enter %d elements in desc order: ", n1);
    for(int i=0; i<n1; i++)
        scanf("%d", &arr1[i]);

    int n2;
    printf("Enter size of array_2: ");
    scanf("%d", &n2);
    
    int arr2[n2];
    printf("Enter %d elements in desc order: ", n2);
    for(int i=0; i<n2; i++)
        scanf("%d", &arr2[i]);

    merge(arr1, n1, arr2, n2);

    return 0;
    
}