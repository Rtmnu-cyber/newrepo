#include <stdio.h>

void max(int num)
{
    int sum = 0;
    int numx = 0;
    while (num != 0)
    {
        numx = num % 10;
        sum = sum + numx;
        num = num / 10;
    }
    if (sum <= 9)
        printf("%d\n", sum);
    else
    {
        max(sum);
    }
}

int main()
{
    int value = 0;
    printf("enter a number");
    scanf("%d", &value);

    max(value);

    return 0;
}
