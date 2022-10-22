#include <stdio.h>
int main(){
    int x, d;
    printf("Enter a number and a digit to be appended: ");
    scanf("%d %d", &x, &d);
    printf("Required answer is: %d", x*10+d);

    return 0;
}