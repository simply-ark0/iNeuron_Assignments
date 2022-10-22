#include<stdio.h>

void swap(int *a, int *b){
    int buff = *a;
    *a = *b;
    *b = buff;

}

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Numbers before swap: %d & %d\n", a, b);
    swap(&a, &b);
    printf("Numbers after swap: %d & %d\n", a, b);

    return 0;
}