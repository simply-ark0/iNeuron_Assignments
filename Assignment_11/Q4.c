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
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int k = n;

    while(1)
        if(prime(++n))
            break;

    printf("Prime number next to %d is %d", k, n);

    return 0;

}