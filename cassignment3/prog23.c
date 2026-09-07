#include <stdio.h>

int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n = 5;

    for(int i = 0; i < n; i++)
    {
        // Print spaces
        for(int j = 0; j < n - i - 1; j++)
        {
            printf("  ");
        }

        // Print Pascal values
        for(int j = 0; j <= i; j++)
        {
            int value;

            value = factorial(i) /
                    (factorial(j) * factorial(i - j));

            printf("%d   ", value);
        }

        printf("\n");
    }

    return 0;
}
