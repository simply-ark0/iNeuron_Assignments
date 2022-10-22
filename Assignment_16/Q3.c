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

    int m1[n][n], trans[n][n];

    printf("Enter values for m1: \n");
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            printf("Enter (%d,%d) element: ", i, j);
            scanf("%d", &m1[i][j]);
        }


    printf("Matrix M1:-\n");
    printMat(n, n, m1);


    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            trans[i][j] = m1[j][i];

    printf("Transpose of Matrix M1:-\n");
    printMat(n, n, trans);

    return 0;
}