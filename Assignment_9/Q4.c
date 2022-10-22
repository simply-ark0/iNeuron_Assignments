#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, c; 
    char choice;
    do{
        printf("Enter sides of the triangle: ");
        scanf("%d%d%d", &a, &b, &c);
        if(a+b<=c || a+c<=b || b+c<=a){
            printf("Invalid sides of triangle!");
            return 0;
        }

        fflush(stdin);

        printf("Enter (a) to check whether given set of three numbers are lengths of an isosceles triangle or not\n");
        printf("Enter (b) to check whether given set of three numbers are lengths of sides of right angled triangle or not\n");
        printf("Enter (c) to check whether given set of three numbers are equilateral triangle or not\n");
        printf("Enter (d) to exit\n");
        printf("Enter choice: ");
        scanf("%c", &choice);

        switch(choice){
            case 'a':
                if(a==b || b==c || c==a)
                    printf("The given triangle with sides %d, %d & %d is an isosceles.\n", a, b, c);
                else
                    printf("The given triangle with sides %d, %d & %d is not an isosceles.\n", a, b, c);
                break;
            case 'b':
                if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
                    printf("The given triangle with sides %d, %d & %d is a right angled triangle.\n", a, b, c);
                else
                    printf("The given triangle with sides %d, %d & %d is not a right angled triangle.\n", a, b, c);
                break;
            
            case 'c':
                if(a==b && b==c)
                    printf("The given triangle with sides %d, %d & %d is an equilateral triangle.\n", a, b, c);
                else
                    printf("The given triangle with sides %d, %d & %d is not an equilateral triangle.\n", a, b, c);
                break;

            case 'd':
                break;

            default:
                printf("The given triangle with sides %d, %d & %d is a scalene triangle.\n", a, b, c);
        }
    }while(choice!='d');

    return 0;
}