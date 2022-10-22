#include<stdio.h>

float SI(float p, float r, int t){
    return (p*r*t)/100;
}

int main(){
    float p, r;
    int t;
    printf("Enter principal Amount: ");
    scanf("%f", &p);
    printf("Enter time period: ");
    scanf("%d", &t);
    printf("Enter rate of interest: ");
    scanf("%f", &r);

    printf("Simple interest on the given data: %0.3f", SI(p, r, t));

    return 0;
}