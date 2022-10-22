#include<stdio.h>

long fact(long n){
    if(n==0 || n==1)
        return 1;
    
    return n*fact(n-1);
}

long Rfact(long n, long r){
    if(n==0 || n==1 || n==r)
        return 1;

    return n*Rfact(n-1, r);
}

void prtPascal(int n){
    for(int i=0; i<n; i++){
        int r = 0;
        for(int j=1; j<n-i; j++)
            printf(" ");
        for(int k=1; k<=2*i+1; k++){
            if(k%2){
                if(i-r>r)
                    printf("%ld", Rfact(i, i-r)/fact(r));
                else
                    printf("%ld", Rfact(i, r)/fact(i-r));
                r++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    prtPascal(n);

    return 0;
}