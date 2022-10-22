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

void printPrime(int n){
    int i=2;
    while(n!=0){
        if(prime(i)){
            printf("%d, ", i);
            n--;
        }
        
        i++;
    }
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printPrime(n);

    return 0;
}