#include<stdio.h>

void primeFac(int n){
    int i=2;

    while(n!=1){
        if(n%i==0){
            printf("%d, ", i);
            n /= i;
            continue;
        }
        i++;
    }
}

int main(){
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);

    primeFac(n);


    return 0;    
}