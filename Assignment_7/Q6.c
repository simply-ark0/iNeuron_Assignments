#include<stdio.h>
#include<math.h>

int prime(int n){
    unsigned short flag = 1;

    if(n==1)
        return 0;

    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0){
            flag = 0;
            break;
        }

    return flag;
}

int main(){
    for(int i=1; i<=100; i++){
        if(prime(i))
            printf("%d, ", i);
    }

    return 0;
}