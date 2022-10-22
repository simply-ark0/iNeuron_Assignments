#include<stdio.h>
int main(){
    int n, a=0, b=1, c;
    printf("Enter N: ");
    scanf("%d", &n);

    if(n==1){
        printf("The %dst term is %d", n, a);
        return 0;
    }

    if(n==2){
        printf("The %dnd term is %d", n, b);
        return 0;
    }

    for(int i=3; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
    }

    (n==3)?printf("The %drd term is %d", n, c):printf("The %dth term is %d", n, c);

    return 0;
}