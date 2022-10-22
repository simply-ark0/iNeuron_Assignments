#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    int max = (a>b)?a:b;

    while(1){
        if(max%a==0 && max%b==0)
            break;
        max++;
    }

    printf("LCM of %d & %d is %d", a, b, max);

    return 0;
}