#include <stdio.h>
int main() {
    int m;
    printf("Enter month number: ");
    scanf("%d", &m);

    switch (m) {
        case 1:
            printf("This month have 31 days");
            break;
        case 2:
            printf("This month have 28 days");
            break;
        case 3:
            printf("This month have 31 days");
            break;
        case 4:
            printf("This month have 30 days");
            break;
        case 5:
            printf("This month have 31 days");
            break;
        case 6:
            printf("This month have 30 days");
            break;
        case 7:
            printf("This month have 31 days");
            break;
        case 8:
            printf("This month have 31 days");
            break;
        case 9:
            printf("This month have 30 days");
            break;
        case 10:
            printf("This month have 31 days");
            break;
        case 11:
            printf("This month have 30 days");
            break;
        case 12:
            printf("This month have 31 days");
            break;
        default:
            printf("Invalid month number!");
    }

    return 0;
}