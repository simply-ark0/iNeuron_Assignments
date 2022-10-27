#include<stdio.h>
#include<stdlib.h>

int* declare(int n){
    int *ptr = (int*)malloc(n);  // n being number of bytes

    if(ptr == NULL)     // memory allcation failed!
        exit(EXIT_FAILURE);

    return ptr;
}

int main(){
    int n;
    printf("Enter size in bytes: ");
    scanf("%d", &n);
    int *arr = declare(n);

    printf("Memory allocated successfully");
    

    return 0;

}