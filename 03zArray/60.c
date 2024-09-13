#include <stdio.h>
int main()
{
    char arr[5] = {};
    int i;
    printf("enter character :");
    for (i = 0; i <= 5; i++)
    {
        scanf("%c", &arr[i]);
    }
    for (i = 0; i <= 5; i++)

    {
        printf("%s", arr[i]);
    }
    return 0;
}