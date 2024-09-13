#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;  // Number of elements

    // Step 1: Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Step 2: Allocate memory for the array dynamically
    int *array = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;  // Return an error code
    }

    // Step 3: Initialize and use the array
    printf("Enter %d integer values:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }

    // Display the values
    printf("You entered:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Step 4: Deallocate memory
    free(array);

    return 0;
}
