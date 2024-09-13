#include <stdio.h>
int main()
{
    char arr[5];
    int i;
    printf(" enter a character elements:");
    for (i = 0; i < 5; i++)

    {
        scanf("%c", &arr[i]);
    }

    printf("entered character are:");
    for (i = 0; i < 5; i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}