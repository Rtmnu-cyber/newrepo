#include <stdio.h>
int main()
{
    double realpart, imaginarypart;
    printf("enter the real part of complex number: ");
    scanf("%lf", &realpart);
    printf("enter the imaginary part of the complex number:");
    scanf("%lf", &imaginarypart);
    if (imaginarypart >= 0)
    {
        printf("%2lf +%.2lfi\n", realpart, +imaginarypart);
    }
    else
    {
        printf("%2lf-%.2lfi\n", realpart, -imaginarypart);
    }
    return 0;
}

