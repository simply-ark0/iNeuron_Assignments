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

    int m1[n][n], Srow, Scol;

    printf("Enter values for m1: \n");
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            printf("Enter (%d,%d) element: ", i, j);
            scanf("%d", &m1[i][j]);
        }

    printf("Matrix M1:-\n");
    printMat(n, n, m1);

    printf("Lower triangular matrix:-\n");

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            if(i<j)
                printf("  ");
            else
                printf("%d ", m1[i][j]);
        printf("\n");
    }

    return 0;
}