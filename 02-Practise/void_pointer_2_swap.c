#include <stdio.h>
#include <string.h>  // For memcpy

// Function to swap two integers using void pointers
void swap(void *a, void *b, size_t size) {
    // Create temporary storage for the swap
    void *temp = malloc(size);
    if (temp == NULL) {
        // Handle memory allocation failure
        fprintf(stderr, "Memory allocation failed\n");
        return;
    }

    // Copy the data to temporary storage
    memcpy(temp, a, size);
    // Copy data from b to a
    memcpy(a, b, size);
    // Copy data from temporary storage to b
    memcpy(b, temp, size);

    // Free the temporary storage
    free(temp);
}

int main() {
    int x = 5;
    int y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Call swap with the address of the variables and size of an int
    swap(&x, &y, sizeof(int));

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
