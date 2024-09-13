#include<stdio.h>
int main()
{
    int mat[3][3],i,j,sum=0;
        printf("enter matrix elements");
        for (i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d",&mat[i][j]);
            }
        }

        printf("\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                sum=sum+mat[i][j];
              
            }

            printf("%d \n",sum);
            sum=0;
        }
        return 0;
    
}