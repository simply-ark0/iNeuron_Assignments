#include <stdio.h>
int main() {
    int inr;
    printf("Enter a amount (INR): ");
    scanf("%d", &inr);
    printf("Amount in USD: %f", inr/76.23);

    return 0;
}