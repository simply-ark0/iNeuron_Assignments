#include<stdio.h>
int main(){
    int unit;
    float cost = 0.00;
    printf("Enter number of units consumed: ");
    scanf("%d", &unit);

    short t= (unit<=50);

    switch(t){
        case 1:
            cost += (0.5)*unit;
            break;
        case 0:
            t = unit<=150;
            switch(t){
                case 1: 
                    cost = 25 + (unit-50)*0.75;
                    break;
                case 0:
                    t = unit<=250;
                    switch(t){
                        case 1:
                            cost = 100 + (unit-150)*1.20;
                            break;
                        case 0:
                            cost = 220 + (unit-250)*1.50;
                            break;

                    }
                break;
            }
        break;
    }

    cost += 1.20*cost;

    printf("Your total electricity bill is %0.2f", cost);

    return 0;

}