#include<stdio.h>
int main(){
    int n, a=0, b=1, c, flag=0;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(n==0){
        printf("The number %d is there in the fibonacci series", n);
        return 0;
    }

    for(int i=1; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
        if(c==n){
            flag = 1;
            break;
        }
    }

    (flag)?printf("The number %d is there in the fibonacci series", n):printf("The number %d is not there in the fibonacci series", n);


    return 0;
}