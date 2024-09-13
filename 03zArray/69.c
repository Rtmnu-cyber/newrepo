#include<stdio.h>
int main()
{
    int M[3][3],row,col,sum=0;
    printf("Enter matrix values\n");
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            scanf("%d",&M[row][col]);
        }
    }

    for(row=0;row<3;row++)
    {
        
            printf("\n%d\t",M[row][2-row]);
            sum=sum+M[row][2-row];
    }
    printf("Sum=%d\n",sum);
        
}