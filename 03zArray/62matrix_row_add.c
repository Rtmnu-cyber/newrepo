#include <stdio.h>
int main()
{
    int mat[2][2], i, j;
    int sum = 0;
    // 2 by 2 matrix
    printf("enter matrix:\n");

    for (i = 0; i < 2; i++)
    {
        
            for (j = 0; j < 2; j++)
            {
                scanf("%d", &mat[i][j]);
            }
        
    }
 // matrix is
    printf("\nThe entered matrix is:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    //addition of row 

    for (i = 0; i < 2; i++)

    {
        for (j = 0; j < 2; j++)
        {

            sum = sum + mat[i][j];
        }
        printf("%d \n", sum);
        sum = 0;
    }

    return 0;
}