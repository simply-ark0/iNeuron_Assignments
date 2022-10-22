#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 values: ");

    for(int i=0; i<10; i++)
        scanf("%d", &arr[i]);
    
    int small = arr[0];
    for(int i=1; i<10; i++)
        if(arr[i]<small)
            small = arr[i];

    printf("Smallest element in the array = %d", small);

    return 0;
}