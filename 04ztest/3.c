#include <stdio.h>
int main()
{

    int n = 4;
    int i, j;
    int A[3][3];
    int max, min;

    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            printf("Enter an element A[%d][%d]: ", i, j);
            scanf("%d", &A[i - 1][j - 1]);
        }
    }

    for (i = 1; i < n; i++)
    {
        printf("[");
        for (j = 1; j < n; j++)
        {
            printf("  %d  ", A[i - 1][j - 1]);
        }
        printf("]\n");
    }

    max = A[0];
    for (i = 1; i < n; i++)
        if (max < A[i])
            max = A[i];
    printf("\n Row Largest Number : %d\n", max);

    int min = A[0];
    for (j = 1; j < n; j++)
        if (min > A[i])
            min = A[i];
    printf("\n column larget number Number : %d\n", min);
    return 0;
}