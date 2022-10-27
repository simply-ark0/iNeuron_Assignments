#include<stdio.h>

int * func(void){
    int a = 6;

    return &a;
}

int main(){
    int *p;
    p = func();  
      // after this line, memory for x is released. Thus pointer p is pointing to an address who's
      // memory is not reaserved. In this situation p is a dangling pointer.

    *p = 10; //WARNING -> Illeagal memory access!

    printf("Value: %d\n", *p);

    return 0;
}