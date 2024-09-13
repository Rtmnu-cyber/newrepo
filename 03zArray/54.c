
#include <stdio.h>
int main()
{
    float arr[5]; int i ;

    printf("enter array elemnts:");
    for (i = 0; i < 5; i++)

    {
        scanf("%f", &arr[i]);
    }
    printf("enterd array elemsts are:");
    for (i = 0; i < 5; i++)
    {
        printf("%.2f \t", arr[i]);
    }
    return 0;
}