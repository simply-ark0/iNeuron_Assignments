#include<stdio.h>
int main(){
    int a, b, hcf;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);

    int min = (a<b)?a:b;
    for(int i=1; i<=min; i++)
        if(a%i==0 && b%i==0){
            hcf = i;
        }

    (hcf==1)?printf("%d and %d are co-prime", a, b):printf("%d and %d are not co-prime", a, b);

    return 0;
}