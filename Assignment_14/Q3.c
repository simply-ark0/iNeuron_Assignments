#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 values: ");

    for(int i=0; i<10; i++)
        scanf("%d", &arr[i]);

    int sumEven = 0, sumOdd = 0;
    for(int i=0; i<10; i++){
        if(arr[i]%2)
            sumOdd += arr[i];
        else
            sumEven += arr[i];
    }
    
    printf("Sum of all even values = %d\n", sumEven);
    printf("Sum of all odd values = %d", sumOdd);

    return 0;
}