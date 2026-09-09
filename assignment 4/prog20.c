#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    double result;
    char ch;

    printf("Enter an integer: ");
    scanf("%d", &num);

    result = sqrt(num);

    printf("Square root of %d = %.2lf\n", num, result);

    printf("Enter a character: ");
    getchar();              // consumes newline left by scanf
    ch = getchar();

    printf("Entered character = %c\n", ch);

    return 0;
}
