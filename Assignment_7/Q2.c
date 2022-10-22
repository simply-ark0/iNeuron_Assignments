#include<stdio.h>
int main(){
    int n, a=0, b=1, c;
    printf("Enter N: ");
    scanf("%d", &n);

    if(n==1){
        printf("%d", a);
        return 0;
    }


    printf("%d, %d, ", a, b);
    for(int i=3; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
        printf("%d, ", c);
    }

    return 0;
}