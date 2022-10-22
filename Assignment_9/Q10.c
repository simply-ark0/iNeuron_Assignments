#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c;
    float r1, r2, img;
    printf("Enter a, b, c in the same order: ");
    scanf("%f%f%f", &a, &b, &c);

    float D = (b*b) - (4*a*c);

    short isN = D<0;

    switch(isN){
        case 1:
            r1 = r2 = (-b/(2*a));
            img = sqrt(-D)/(2*a);
            printf("Two distinct complex roots exists: %0.2f + %0.2fi and %0.2f - %0.2fi", r1, img, r2, img);
            break;
        case 0:
            if(D==0){
                r1 = r2 = (-b/(2*a));
                printf("Two roots are real and equal: %0.2f and %0.2f", r1, r2);
            }
            else{
                r1 = (-b + sqrt(D))/(2*a);
                r2 = (-b - sqrt(D))/(2*a);
                printf("Two distinct and real roots exists: %0.2f and %0.2f", r1, r2);
            }

    }

    return 0;
}