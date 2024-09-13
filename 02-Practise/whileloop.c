#include <stdio.h>

int main() {
    int n = 2;
    int arr[2][2];
    int i = 0, j = 0;

    // Input elements
    printf("Enter elements:\n");
    while (i < 2) {
        j = 0;  // Reset j to 0 for each row
        while (j < 2) {
            scanf("%d", &arr[i][j]);
            j++;
        }
        i++;
    }

    // Print the matrix
    printf("Input Matrix is:\n");
    i = 0;  // Reset i for printing
    while (i < 2) {
        j = 0;  // Reset j for each row
        while (j < 2) {
            printf("%d ", arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
