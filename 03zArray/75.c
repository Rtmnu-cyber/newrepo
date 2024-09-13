#include <stdio.h>
int main()

{
    int a[3][3];
    int v[3][1];

    int i, j;

    printf("enter a values");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter a values for vector");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            scanf(" %d", &v[i][j]);
        }
    }
    printf("MATRIX IS AFTER ADDITION\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            v[i][0] = v[i][0] + a[i][j];
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            printf("%d\t", v[i][j]);
        }
    printf("\n");
    }return 0;
}
