#include <stdio.h>

void swap(int *a, int *b) {
    int temp;  // Third variable to help with the swap

    // Perform the swap
    temp = *a;  // Store the value of *a in temp
    *a = *b;    // Assign the value of *b to *a
    *b = temp;  // Assign the value stored in temp to *b
}

int main() {
    int x, y;

    // Input two integers from the user
    printf("Enter two integers:\n");
    scanf("%d %d", &x, &y);

    // Display the values before swapping
    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Call the swap function
    swap(&x, &y);

    // Display the values after swapping
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
