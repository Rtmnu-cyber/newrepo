#include <stdio.h>
int main()
{
    char a[];
    int i;
    printf("enter a character:");
    for (i = 0; i < 5; i++)

    {
        scanf("%c",&a[i]);
    }
    for (i = 0; i < 5; i++)

    {
        printf("%c",a[i]);
    }
    return 0;
}