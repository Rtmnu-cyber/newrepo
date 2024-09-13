#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
   

    printf("enter elements ");
    scanf("%d",&n);
    // Dynamically allocate memory for an array of 10 integers
    int *array = (int *)malloc(n* sizeof(int));
    
    

    // Read numbers into the array
    printf("Ente numbers:\n");
    for (int i = 0; i <n; i++) {
     
        scanf("%d", &array[i]);
    }

    // Print the numbers
    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    

    return 0;
}
