#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 values: ");
    for(int i=0; i<10; i++)
        scanf("%d", &arr[i]);
    
    printf("Array in provided format: ");
    for(int i=0; i<10; i++)
        printf("%d, ", arr[i]);

    printf("\nArray in reversed order: ");
    for(int i=9; i>=0; i--)
        printf("%d, ", arr[i]);

    return 0;
}