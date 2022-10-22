#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 values: ");

    for(int i=0; i<10; i++)
        scanf("%d", &arr[i]);

    int sum = 0;
    for(int i=0; i<10; i++)
        sum += arr[i];
    
    printf("Sum of entered 10 values = %0.3f", sum/10.0);

    return 0;
}