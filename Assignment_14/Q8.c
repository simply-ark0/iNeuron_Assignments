#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 numbers: ");

    for(int i=0; i<10; i++)
        scanf("%d", &arr[i]);

    // sorting the array
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(arr[i]>arr[j]){
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }

    printf("Second smallest number in the given array = %d", arr[1]);

    return 0;
}