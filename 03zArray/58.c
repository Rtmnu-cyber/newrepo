#include <stdio.h>
int main()

{
    int arr[5];
    int sum = 0, i;
    printf("enter five elements:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)

    {
        sum = sum + arr[i];
    }

    if (sum > 10)
    {

        printf("%d", sum / 2);
    }
    else if (sum < 10)
    {
        printf("%d", sum / 3);
    }
    return 0;
}