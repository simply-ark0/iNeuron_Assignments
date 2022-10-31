#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void display(int *arr, int len, int sum){
    system("clear");
    printf("Array: [");
    for(int i=0; i<len; i++)
        if(i==len-1)
            printf("%d]", arr[i]);
        else
            printf("%d, ", arr[i]);

    printf("\nSum = %d\n\n", sum);
}

int main(){
    int len;
    printf("Enter size of array: ");
    scanf("%d", &len);

    int *arr = (int*)malloc(len*sizeof(int));
    if(arr == NULL){
        printf("Memory Allocation failed\n");
        exit(EXIT_FAILURE);
    }

    int sum = 0;

    for(int i=0; i<len; i++){
        printf("Enter value for index %d: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
        display(arr, i+1, sum);
    }

    free(arr);

    return 0;

}