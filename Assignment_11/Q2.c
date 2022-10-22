#include<stdio.h>

int HCF(int a, int b){
    int least = (a>b)?b:a;
    int hcf = 1;
    for(int i=1; i<=least; i++)
        if(a%i==0 && b%i==0)
            hcf = i;

    return hcf;
}

int main(){

    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);

    printf("HCF of %d and %d = %d", a, b, HCF(a, b));
    
    return 0;

}