#include<stdio.h>
int main(){
    int n;
    printf("Enter the day number of week: ");
    scanf("%d", &n);
    switch(n){
        case 1:
            printf("Good morning, it's monday. Your Monday morning thoughts set the tone for your whole week.");
            break;
        case 2:
            printf("Good Morning! Today is the thoughtful Tuesday. Think about your present and plan your future accordingly.");
            break;
        case 3:
            printf("Have a wonderful day ahead because Wednesday is smiling at you, good morning!");
            break;
        case 4:
            printf("Have a blessed and cheerful Thursday morning! May your day be blessed with joy and happiness as the sun shines its rays.");
            break;
        case 5:
            printf("Good Morning! It is the day like a cool breeze in life. Enjoy the Friday");
            break;
        case 6:
            printf("Let's welcome the Saturday morning with lemon tea and honey and let's have a big round of applause and cheers.");
            break;
        case 7:
            printf("Blessings for a beautiful day of love, peace, and the sweet presence of the lord Good Morning!");
            break;
        default:
            printf("Invalid day number!");
    }

    return 0;
}