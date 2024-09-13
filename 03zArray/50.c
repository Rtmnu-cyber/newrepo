#include <stdio.h>

int main()
{
    int n;
    FILE *inputFile = fopen("prog1.txt", "r");
    

    fscanf(inputFile, "%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        fscanf(inputFile, "%d", &arr[i]);
    }
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
   
    for (int i = 0; i < n; i++)
    {
         for (int j = 0; j < n; j++)
        printf("%d\t ", arr[i]);
    }
    printf( "\n");

    return 0;
}

