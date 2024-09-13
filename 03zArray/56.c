#include <stdio.h>
int main()
{
    int a[5], sum = 0, i;

    printf(" enter elements:");
    for (i = 0; i < 5; i++)

    {
        scanf("%d", &a[i]);
    }

    printf("entered elements are:");
    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    printf("%d", sum);

    return 0;
}