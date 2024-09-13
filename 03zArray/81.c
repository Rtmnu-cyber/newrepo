#include <stdio.h>
int main()
{
    int num ;
    int numx = num;
    int sum = 0;
    int count;

    printf("enter your number ");
    scanf("%d", &numx);
    while (num != 0)
    {
        sum = num % 10;
        if (numx % sum == 0)

        {
            count++;
        }
        num = num / 10;
    }
    printf("%d", count);
    return 0;
}