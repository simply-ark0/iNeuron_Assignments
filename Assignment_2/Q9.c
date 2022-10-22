#include<stdio.h>
int main(){
    int i;
    printf("Size of int is %lu\n", sizeof(i));

    float f;
    printf("Size of float is %lu\n", sizeof(f));

    char c;
    printf("Size of char is %lu\n", sizeof(c));

    double d;
    printf("Size of double is %lu\n", sizeof(d));

    return 0;
}