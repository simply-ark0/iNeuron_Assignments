#include<stdio.h>
#include<math.h>

float CirArea(float r){
    return M_PI*r*r;
}

int main(){

    int r; 
    printf("Enter radius of circle: ");
    scanf("%d", &r);

    printf("Area of circle: %0.3f", CirArea(r));

    return 0;

}