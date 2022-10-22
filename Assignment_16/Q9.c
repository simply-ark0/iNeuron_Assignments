#include<stdio.h>

void printMat(int r, int c, int mat[r][c]){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter dimension of square matrix: ");
    scanf("%d", &n);

    int m[n][n];
    printf("Enter boolean values for m1: \n");
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            printf("Enter (%d,%d) element: ", i, j);
            scanf("%d", &m[i][j]);
        }

    printMat(n, n, m);

    int count=0;
     for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(m[i][j])
                count++;

    (count>(n*n)/2)?printf("Given matrix is not sparse"):printf("Given matrix is sparse");

    return 0;

}