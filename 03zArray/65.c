#include<stdio.h>
int main ()
{
    int mat[3][3],i,j;
    int sum=0;

    printf("enter matrix elements");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("entered elements are ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+mat[i][j];
            
        }
        printf("%d \n",sum);
        sum=0;
    }
      for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            sum=sum+mat[j][i];
            
        }
        printf("%d \n",sum);
        sum=0;
    }
    return 0;
}