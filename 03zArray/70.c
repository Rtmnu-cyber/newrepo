#include <stdio.h>
int main()
{
    int mat[2][2], i, j;
    printf("enter elemnets:");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("matrix is:\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t ", mat[i][j]);
        }printf("\n");
    }
     printf("diagonal elements are \n");
     for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if(i==j)
            printf("%d \n",mat[i][j]);
        }
      
    }
return 0;
  
}