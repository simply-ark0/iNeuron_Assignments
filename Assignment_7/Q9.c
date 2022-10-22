#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int k = n;
    int sum = 0;

    while(k!=0){
        int l = k%10;
        sum += l*l*l;
        k /= 10;
    }

    (sum==n)?printf("%d is an armstrong number", n):printf("%d is not an armstrong number", n);

    return 0;

}