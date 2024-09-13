#include <stdio.h>

int main()
{
    int n = 4;
    int A[3][3], B[3][3], i, j, sum = 0;
    int k;
    int C[3][3];

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

    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            printf("Enter an element B[%d][%d]: ", i, j);
            scanf("%d", &B[i - 1][j - 1]);
        }
    }

    for (i = 1; i < n; i++)
    {
        printf("[");
        for (j = 1; j < n; j++)
        {
            printf("  %d  ", B[i - 1][j - 1]);
        }
        printf("]\n");
    }

    printf("\n[A] + [B] = \n");
    for (i = 1; i < n; i++)
    {
        printf("[");
        for (j = 1; j < n; j++)
        {
            printf("  %2d  ", A[i - 1][j - 1] + B[i - 1][j - 1]);
        }
        printf("]\n");
    }

    printf("\n[A] - [B] = \n");
    for (i = 1; i < n; i++)
    {
        printf("[");
        for (j = 1; j < n; j++)
        {
            printf("  %2d  ", A[i - 1][j - 1] - B[i - 1][j - 1]);
        }
        printf("]\n");
    }

    printf("\n[A] * [B] = \n");

    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            C[i - 1][j - 1] = 0;
            for (k = 1; k < n; k++)
            {
                C[i - 1][j - 1] += A[i - 1][k - 1] * B[k - 1][j - 1];
                
            }
      
        }
    }


for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d",C[i-1][j-1]);
    }
}


    return 0;
}