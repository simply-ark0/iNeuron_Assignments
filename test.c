#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char c;
    char word[100];
    char str[100];

    scanf("%c", &c);
    scanf("%s", word);
    fflush(stdin);
    scanf("%[^\n]%*c", str);

    printf("%c\n", c);
    printf("%s\n", word);
    puts(str);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
