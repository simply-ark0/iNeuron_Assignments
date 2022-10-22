#include <stdio.h>
int main(){
    int x;
    printf("Enter a 3-digit number: ");
    scanf("%d", &x);
    int lastD = x%10;
    x = (x/10) + lastD*100;
    printf("After rotaion: %d", x);

    return 0;

}