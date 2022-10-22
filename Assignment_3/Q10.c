#include<stdio.h>
int main(){
    float cp, sp;
    printf("Enter Cost Price(CP): ");
    scanf("%f", &cp);
    printf("Enter Selling Price(SP): ");
    scanf("%f", &sp);

    float profit = ((sp-cp)/cp)*100;

    if(profit < 0)
        printf("There is a loss of %0.2f %%", (profit*-1));
    else if(profit>0)
        printf("There is a profit of %0.2f %%", profit);
    else
        printf("There is no profit no loss in the transaction");

    return 0;
}