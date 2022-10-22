#include<stdio.h>
#include<string.h>

void rotate(int* arr, int size, int n, char* dir){

    for(int i=1; i<=n; i++){
        if(strcmp(dir, "left") == 0){
            printf("left");
            int buff = arr[0];
            for(int j=1; j<size; j++)
                arr[j-1] = arr[j];
            arr[size-1] = buff;
        }
        else if(strcmp(dir, "right") == 0){
            int buff = arr[size-1];
            for(int j=size-1; j>0; j--)
                arr[j] = arr[j-1];
            arr[0] = buff;
        }
    }
}

int main(){
    int size, n;
    char dir[10];
    printf("Enter size of array: ");
    scanf("%d", &size);

    if(size==0){
        printf("Array size can't be 0");
        return 0;
    }
    int arr[size];
    printf("Enter %d values: ", size);
    for(int i=0; i<size; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter direction (right/left): ");
    scanf("%s", dir);

    rotate(arr, size, n, dir);

    printf("Array after rotaion: ");
    for(int i=0; i<size; i++)
        printf("%d, ", arr[i]);

    return 0;
    
}