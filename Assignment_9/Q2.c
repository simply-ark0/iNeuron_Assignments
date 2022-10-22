#include<stdio.h>
#include<stdlib.h>

int main(){
    char choice;
    float a, b;

    do{
        printf("Enter (a) for Addition\n");
        printf("Enter (b) for Substraction\n");
        printf("Enter (c) for Multiplication\n");
        printf("Enter (d) for Division\n");
        printf("Enter (e) to exit\n");
        printf("Enter your choice: ");
        scanf("%c", &choice);

        switch(choice){
            case 'a':
                printf("Enter two numbers: ");
                scanf("%f%f", &a, &b);
                printf("Addition of %0.1f and %0.1f is %0.2f\n", a, b, a+b);
                break;
            case 'b':
                printf("Enter two numbers: ");
                scanf("%f%f", &a, &b);
                printf("Substraction of %0.1f from %0.1f is %0.2f\n", b, a, a-b);
                break;
            case 'c':
                printf("Enter two numbers: ");
                scanf("%f%f", &a, &b);
                printf("Multiplication of %0.1f and %0.1f is %0.2f\n", a, b, a*b);
                break;
            case 'd':
                printf("Enter two numbers: ");
                scanf("%f%f", &a, &b);
                printf("Division of %0.1f with %0.1f is %0.2f\n", a, b, a/b);
                break;
            case 'e':
                break;
            default:
                printf("Invalid i/p!\n");
        }

        fflush(stdin);
    }while(choice != 'e');

    return 0;
}