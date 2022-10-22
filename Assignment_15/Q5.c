#include<stdio.h>

int dupl(int* arr, int size){
    for(int i=0; i<size-1; i++){
        if(arr[i] == arr[i+1])
            return i;
    }

    return -1;
}

int main(){
    int size;
    printf("Enter size of Array: ");
    scanf("%d", &size);

    if(size==0){
        printf("Size of array can't be 0");
        return 0;
    }

    int arr[size];
    printf("Enter %d elements: ", size);
    for(int i=0; i<size; i++)
        scanf("%d", &arr[i]);
    
    int index = dupl(arr, size);

    (index==-1)?printf("There are no adjacent duplicate values in the array"):printf("First occurance of duplicate adjacent values = %d", arr[index]);

    return 0;
}