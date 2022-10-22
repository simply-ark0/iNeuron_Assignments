#include<stdio.h>

int hcf(int a, int b){
    if(b==0)
        return a;
    else 
        return hcf(b, a%b);
}

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("HCF of %d and %d = %d", a, b, hcf(a,b));
    

    return 0;
}