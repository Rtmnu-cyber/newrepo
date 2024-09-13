#include<stdio.h>
int main()
{
    int n;
    printf("enter your grades :");
    scanf("%d", &n);
    if (n >= 90)
    {
        printf("your score is A");
    }
    else if (n>=80 && n<=89)
    {
        printf("your score is B \n");
    }
    return 0;
}
