#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 0, buff = n;
    while(buff!=0){
        buff /= 10;
        count++;
    }

    if(count == 3)
        printf("%d is a 3 digit number", n);
    else
        printf("%d is not a 3 digit number", n);

}