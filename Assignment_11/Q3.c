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

int main(){
    short n;
    printf("Enter a number: ");
    scanf("%hd", &n);

    (prime(n))?printf("The number %hd is prime!", n):printf("The number %hd is not prime!", n);

    return 0;
}