#include <stdio.h>
int main()
{
    int n = 3;
    int i, j;
    int A[2][2];
    int B[2][2];
    int sum = 0;

    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            printf("enter elemnts A[%d][%d]:", i, j);
            scanf("%d", &A[i - 1][j - 1]);
        }
    }

    for (i = 1; i < n; i++)
    {
        printf("[");
        for (j = 1; j < n; j++)
        {
            printf(" %d ", A[i - 1][j - 1]);
        }
        printf("]\n");
    }



for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            printf("enter elemnts B[%d][%d]:", i, j);
            scanf("%d", &B[i - 1][j - 1]);
        }
    }

    for (i = 1; i < n; i++)
    {
        printf("[");
        for (j = 1; j < n; j++)
        {
            printf("%d", B[i - 1][j - 1]);
        }
        printf("]\n");
    }




}