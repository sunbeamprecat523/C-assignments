#include <stdio.h>

char *my_itoa(int value, char *str, int base)
{
    const char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unsigned int n;
    int i = 0, negative = 0;

    if (base < 2 || base > 36) {
        str[0] = '\0';
        return str;
    }

    if (value < 0 && base == 10) {
        negative = 1;
        n = (unsigned int)(-(long long)value);
    } else {
        n = (unsigned int)value;
    }

    do {
        str[i++] = digits[n % base];
        n /= base;
    } while (n != 0);

    if (negative) str[i++] = '-';
    str[i] = '\0';

    for (int l = 0, r = i - 1; l < r; l++, r--) {
        char t = str[l]; str[l] = str[r]; str[r] = t;
    }

    return str;
}

int main(void)
{
    int value, base;
    char str[100];

    printf("Enter number: ");
    scanf("%d", &value);
    printf("Enter base (2-36): ");
    scanf("%d", &base);

    printf("String = %s\n", my_itoa(value, str, base));
    return 0;
}
