#include<stdio.h>
#include<math.h>
int main(){
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    float area = M_PI*r*r;
    printf("Area of circle is %f having the radius %0.2f", area, r);
}