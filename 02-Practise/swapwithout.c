#include <stdio.h>

int main() {
    int x, y;
    int *p1 = &x;  // Pointer to the first integer
    int *p2 = &y;  // Pointer to the second integer

    // Input two integers from the user
    printf("Enter two integers:\n");
    scanf("%d %d", &x, &y);

    // Display the values before swapping
    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Swap using arithmetic operations
    if (p1 != p2) {  // Check to prevent swapping the same variable
        *p1 = *p1 + *p2;  // Step 1: Add *p1 and *p2 and store in *p1
        *p2 = *p1 - *p2;  // Step 2: Subtract *p2 from *p1 to get the original value of *p1 in *p2
        *p1 = *p1 - *p2;  // Step 3: Subtract the new *p2 from *p1 to get the original value of *p2 in *p1
    }
    
    // Display the values after arithmetic swap
    printf("After arithmetic swapping: x = %d, y = %d\n", x, y);

    // Re-input two integers for XOR method
    printf("Enter two integers again:\n");
    scanf("%d %d", &x, &y);

    // Display the values before swapping using XOR
    printf("Before XOR swapping: x = %d, y = %d\n", x, y);

    // Swap using XOR operations
    if (p1 != p2) {  // Check to prevent swapping the same variable
        *p1 = *p1 ^ *p2;  // Step 1: XOR *p1 and *p2 and store in *p1
        *p2 = *p1 ^ *p2;  // Step 2: XOR new *p1 with *p2 to get the original value of *p1 in *p2
        *p1 = *p1 ^ *p2;  // Step 3: XOR new *p2 with new *p1 to get the original value of *p2 in *p1
    }

    // Display the values after XOR swap
    printf("After XOR swapping: x = %d, y = %d\n", x, y);

    return 0;
}
