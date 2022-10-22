#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter coeff(x^2), coeff(x) and constant term in the same order as mentioned: ");
    scanf("%d%d%d", &a, &b, &c);

    int D = (b*b) - (4*a*c);

    if(D>0)
        printf("Roots are real and distinct");
    else if(D == 0)
        printf("Roots are real and equal");
    else
        printf("Roots are imaginary");

    return 0;

}