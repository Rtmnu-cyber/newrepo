#include <stdio.h>
int main()
{
    int n,average;
    int i, sum = 0;
    
    // enter array size
    printf("enter array size:");
    scanf("%d", &n);

    // enter elemnts in array
    int arr[n];
    printf("enter elements:/n");

    // store the elements

    for (i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    average = sum / n;
    if (average > 50)
    {
        average = average / 2;
    }
    printf("%d", average);
}