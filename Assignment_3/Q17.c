#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter sides of the triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    (a+b>c && a+c>b && b+c>a)?printf("Triangle is valid"):printf("Triangle is not valid");

    return 0;

}