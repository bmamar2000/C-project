#include <stdio.h>

void factorial()
{
    int n, i;
    unsigned long long fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Check for negative number
    if (n < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    }
    else
    {
        for (i = 1; i <= n; ++i)
        {
            fact = fact * i;
        }

        printf("Factorial of %d = %llu\n", n, fact);
    }
}
