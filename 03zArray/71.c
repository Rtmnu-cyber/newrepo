#include <stdio.h>
int main()
// row addition
{
    int mat[2][2], i, j;
    printf(" enter matrix elements");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {


            scanf("%d", &mat[i][j]);
        }
    }
    printf("enterd matrix is:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {

            printf("\t %d", mat[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    printf("resultant matrix is:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum += mat[j][i];
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}
