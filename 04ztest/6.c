#include<stdio.h>
int main()
{
    int n=3;
    int i,j;
    A[3][3];
    B[3][3];
    C[3][3];
    printf("enter array elemts:");
    scanf("%d",&A[i][j]);


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for (k=0;k<n;k++)
            {
                 C[i][j]+=A[i][k]*B[k][j];
            }
           
        }printf("%d")
    }
    
    
    }