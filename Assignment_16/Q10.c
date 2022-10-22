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

    printf("Enter boolean values for m1: \n");
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            printf("Enter (%d,%d) element: ", i, j);
            scanf("%d", &m1[i][j]);
        }

    printf("Matrix M1:-\n");
    printMat(n, n, m1);

    int count = 0, maxCount = 0, maxI = -1;
    for(int i=0; i<n; i++){
        count = 0;
        for(int j=0; j<n; j++)
            if(m1[i][j])
                count++;
        if(count>maxCount){
            maxCount = count;
            maxI = i;
        }
    }

    printf("Row with max number of 1s = %d", maxI+1);

    return 0;
}