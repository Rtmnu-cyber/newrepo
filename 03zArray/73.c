#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int sum = 0;
    int i;

    printf("enterd number ");
    scanf("%d", &n);

     int *array = (int *)malloc(n* sizeof(int));

    printf("enter numbers");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            sum += array[i];
        }
      
    }
      printf("%d", sum);
    return 0;
}