#include<stdio.h>
#include<math.h>

short prime(int n){
    int isPrime = 1;

    if(n==1)
        return 0;

    for(int i=2; i<=sqrt(n); i++)
        if(n%i == 0){
            isPrime = 0;
            break;
        }

    return isPrime;
}

void prtPrime(int a, int b){
    for(int i=++a; i<b; i++)
        if(prime(i))
            printf("%d, ", i);
}


int main(){
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);

    if(a>b){
        a = a+b;
        b = a-b;
        a = a-b;
    }

    printf("Prime numbers b/w %d and %d are\n", a, b);
    prtPrime(a, b);

    return 0;
}