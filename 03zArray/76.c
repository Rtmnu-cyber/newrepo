#include <stdio.h>

int main() {
    // Define the original matrix A
    int A[3][3] ;
    int i,j;
 
 printf("enter a value:");
 for(i=0;i<3;i++)

{
    for(i=0;i<3;i++)
{
    scanf("%d",&A);
}}
    // Define the second matrix B
    int B[3][3];

    // Copy matrix A into matrix B
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            B[i][j] = A[i][j];
        }
    }

    // Print matrix A
    printf("Matrix A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Print matrix B
    printf("Matrix B (after copying):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
