#include <stdio.h>
int main() {
    int x, count = 1;
    printf("Enter a number: ");
    scanf("%d", &x);
    while(1){
        if(x%2 != 0) break;
        x /= 2;
        count++;
    }

    printf("Position from LSB: %d", count);

    return 0;
}