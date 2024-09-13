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

    // Step 3: Initialize the array with user input
    printf("Enter %d integer values:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }

    // Variables to track the first odd and the largest and second largest even numbers
    int firstOdd = -1;  // Assuming -1 indicates no odd number found
    int largestEven = -1;
    int secondLargestEven = -1;

    // Step 4: Traverse the array to find the first odd number and largest even numbers
    for (int i = 0; i < n; ++i) {
        if (array[i] % 2 != 0) {
            if (firstOdd == -1) {
                firstOdd = array[i];
            }
        } else {
            if (array[i] > largestEven) {
                secondLargestEven = largestEven;
                largestEven = array[i];
            } else if (array[i] > secondLargestEven && array[i] < largestEven) {
                secondLargestEven = array[i];
            }
        }
    }

    // Step 5: Display the results
    if (firstOdd != -1) {
        printf("The first odd number is: %d\n", firstOdd);
    } else {
        printf("No odd number found\n");
    }

    if (secondLargestEven != -1) {
        printf("The second largest even number is: %d\n", secondLargestEven);
    } else {
        printf("Not enough even numbers to determine the second largest\n");
    }

    // Step 6: Deallocate memory
    free(array);

    return 0;
}

