#include<stdio.h>
#include<stdlib.h>

void func(void){
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 5;
    printf("Address of Dynamically Allocated memory: %p\n", ptr);
    printf("Value at address %p = %d\n", ptr, *ptr);

} /* after the scope of func memory for pointer ptr gets released i.e. ptr gets
     deleted. But the dynamically allocated memory using malloc still still exists
     int the heap memory and hasn't been released. Thus our program is holding memory
     during its execution for which we have no reference. This situation is called 
     memory leak.*/

int main(){

    func(); // funtion call to demonstrate memory leak;

    return 0;
}