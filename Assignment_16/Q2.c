#include<stdio.h>

void printMat(int r, int c, int mat[r][c]){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

}

int main(){
    int m1[3][3], m2[3][3];

    printf("Enter values for m1: \n");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++){
            printf("Enter (%d,%d) element: ", i, j);
            scanf("%d", &m1[i][j]);
        }


    printf("Enter values for m2: \n");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++){
            printf("Enter (%d,%d) element: ", i, j);
            scanf("%d", &m2[i][j]);
        }

    printf("Matrix M1:-\n");
    printMat(3, 3, m1);

    printf("Matrix M2:-\n");
    printMat(3, 3, m2);

    int m3[3][3];

    int i, j, k;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++){
            m3[i][j] = 0;
            for(k=0; k<3; k++)
                m3[i][j] += m1[i][k] * m2[k][j];
        }

    printf("Matrix multiplication of M1 and M2:-\n");
    printMat(3, 3, m3);

    return 0;
}