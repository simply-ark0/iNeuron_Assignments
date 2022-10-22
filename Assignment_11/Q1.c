#include<stdio.h>

int LCM(int a, int b, int max){
    int lcm = max;
    if(max%a==0 && max%b==0)
        return max;
    else
        lcm = LCM(a, b, max+1);

    return lcm;
}

int main(){
    int a,  b;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);

    printf("LCM of %d and %d = %d", a, b, LCM(a, b, (a>b)?a:b));

    return 0;
}