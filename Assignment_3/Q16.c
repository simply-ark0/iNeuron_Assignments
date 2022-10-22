#include <stdio.h>
int main() {
    char c;
    printf("Enter a charater: ");
    scanf("%c", &c);

    int n = c;

    if (n >= 65 && n <= 90)
        printf("Given character is an alphabet (UPPERCASE)");
    else if (n >= 97 && n <= 122)
        printf("Given character is an alphabet (lowercase)");
    else if(n >= 48 && n <= 57)
        printf("Given character is a digit");
    else
        printf("Given character is a special character");

    return 0;
}