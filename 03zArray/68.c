
#include <stdio.h>
int main()
{

    int a[3][3], b[3][3];
    int i, j;
    printf("enter array elements\n ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("enterd matrix is : \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }


printf("matrix after scalar multiplicationwith tarnspose");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b[i][j] = 5 * a[i][j];
            printf("%d", b[i][j]);
        }
         printf("\n");
    }
    return 0;
}
