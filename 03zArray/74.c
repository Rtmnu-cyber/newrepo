#include <stdio.h>
int main()
{
    int arr[3][3] = {};
    int i, j;

    printf("enter a value ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("entered value are \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t %d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}
