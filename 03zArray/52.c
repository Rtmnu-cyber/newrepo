#include <stdio.h>

int main()
{
    int n;
    FILE *inputFile = fopen("sam.txt", "r");
   

    fscanf(inputFile, "%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        fscanf(inputFile, "%d", &arr[i]);
    }
    fclose(inputFile);

    // Selection sort
    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }

    // Print the sorted array to the console
    printf("Sorted Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}