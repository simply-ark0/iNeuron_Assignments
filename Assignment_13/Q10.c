#include<stdio.h>

int power(int b, int i){
    if(i==1)
        return b;

    return b*power(b, i-1);
}

int main(){
    int b, i;
    printf("Enter base: ");
    scanf("%d", &b);

    printf("Enter power: ");
    scanf("%d", &i);

    printf("%d^%d = %d", b, i, power(b,i));

    return 0;
}