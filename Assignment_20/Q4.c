#include<stdio.h>

int main(){
    int x = 5;
    int *ptr = &x;

    printf("Address of var x itself: %p\n", &x);
    printf("Address of pointer ptr itself: %p\n", &ptr);

    printf("Address of var to which ptr is pointing (var x): %p\n", ptr);
    printf("Accessing contents of x directly: %d\n", x);
    printf("Accessing contents of x via ptr: %d\n", *ptr);

    x = 10;
    printf("Changing contents of x directly: %d\n", x);

    *ptr = 20;
    printf("Changing contents of x via ptr: %d\n", x);

    return 0;
}