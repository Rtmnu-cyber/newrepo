#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value;
    int n; 
    int i,j;
    int flag = 0;
    printf("Enter elemenst");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    printf("enter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

     i = 0;
    while (i < n - 1)
    {
        int j = i + 1;
        while (j < n);
        {
            if(arr[i] == arr[j])
            {
                flag = 1;
            }
            j++;
        }i++;
    }

    if (flag==0)
    {
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}