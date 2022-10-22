#include<stdio.h>
int  main(){

    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    
    // if(a>b){
    //     if(a>c)
    //         printf("%d is largest among 3", a);
    //     else
    //         printf("%d is largest among 3", c);
    // }else if(b>c){
    //         printf("%d is largest among 3", b);
    // }else
    //         printf("%d is largest among 3", c);

    (a>b)?((a>c)?printf("%d is largest among 3", a):printf("%d is largest among 3", c)):(b>c)?printf("%d is largest among 3", b):printf("%d is largest among 3", c);

    
    return 0;
}