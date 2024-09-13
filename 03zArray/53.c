
#include <stdio.h>
int main()
{
    int arr[5], i;

    printf("enter array elemnts:");
    for (i = 0; i < 5; i++)

    {
        scanf("%d", &arr[i]);
    }
    printf("enterd array elements are:");
    for (i = 0; i < 5; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}