#include <stdio.h>
#include <ctype.h>

int my_atoi(const char *s)
{
    int sign = 1, result = 0;

    while (isspace((unsigned char)*s)) s++;

    if (*s == '-') { sign = -1; s++; }
    else if (*s == '+') s++;

    while (isdigit((unsigned char)*s)) {
        result = result * 10 + (*s - '0');
        s++;
    }

    return sign * result;
}

int main(void)
{
    char str[100];

    printf("Enter a number as string: ");
    fgets(str, sizeof(str), stdin);

    printf("Numeric value = %d\n", my_atoi(str));
    return 0;
}
