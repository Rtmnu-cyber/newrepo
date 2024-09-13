#include <stdio.h>

int main() {
    int n, N;

    // Read the dimensions of the matrix
    printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    printf("Enter the number of columns (N): ");
    scanf("%d", &N);

    // Declare the matrix
    int matrix[n][N];

    // Read matrix elements from the user
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < N; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Read the row index from the user
    int rowIndex;
    printf("Enter the row index to print (0 to %d): ", n - 1);
    scanf("%d", &rowIndex);

    // Validate the row index
    if (rowIndex < 0 || rowIndex >= n) {
        printf("Invalid row index.\n");
        return 1;
    }

    // Print the specified row
    printf("Row %d:\n", rowIndex);
    for (int j = 0; j < N; j++) {
        printf("%d ", matrix[rowIndex][j]);
    }
    printf("\n");

    return 0;
}
