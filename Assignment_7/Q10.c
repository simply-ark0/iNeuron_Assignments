#include<stdio.h>

unsigned short armstrong(int n){
    int k=n, sum=0;


    while(k!=0){
        int l = k%10;
        sum += l*l*l;
        k /= 10;
    }

    if(n==sum)
        return 1;
    else
        return 0;

}

int main(){
    for(int i=0; i<=1000; i++)
        if(armstrong(i))
            printf("%d, ", i);

    return 0;
}