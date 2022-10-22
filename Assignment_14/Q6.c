#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 values: ");
    for(int i=0; i<10; i++)
        scanf("%d", &arr[i]);

    printf("Array before sorting: ");
    for(int i=0; i<10; i++)
        printf("%d, ", arr[i]);

    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(arr[i]>arr[j]){
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }

    printf("\nArray after sorting: ");
    for(int i=0; i<10; i++)
        printf("%d, ", arr[i]);

    return 0;
}