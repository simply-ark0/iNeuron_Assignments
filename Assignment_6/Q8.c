#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n==1){
        printf("%d is not a Prime number.", n);
        return 0;
    }
    unsigned short isPrime = 1;
    for(int i=2; i<sqrt(n); i++){
        if(n%i == 0){
            isPrime = 0;
            break;
        }
    }

    (isPrime)?printf("%d is a Prime number.", n):printf("%d is not a prime number.", n);

    return 0;
}