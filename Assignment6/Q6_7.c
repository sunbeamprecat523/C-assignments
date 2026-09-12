#include <stdio.h>
#include <string.h>

void decimal_to_roman(int num, char *roman)
{
    int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    const char *symbols[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int i = 0;

    roman[0] = '\0';
    while (num > 0 && i < 13) {
        while (num >= values[i]) {
            strcat(roman, symbols[i]);
            num -= values[i];
        }
        i++;
    }
}

int roman_value(char c)
{
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
}

int roman_to_decimal(const char *s)
{
    int total = 0, i;
    for (i = 0; s[i] != '\0'; i++) {
        int cur = roman_value(s[i]);
        int next = roman_value(s[i + 1]);
        if (cur < next) total -= cur;
        else total += cur;
    }
    return total;
}

int main(void)
{
    int num;
    char roman[100];

    printf("Enter decimal number (1-3999): ");
    scanf("%d", &num);

    if (num < 1 || num > 3999) {
        printf("Invalid range.\n");
        return 0;
    }

    decimal_to_roman(num, roman);
    printf("Roman = %s\n", roman);

    printf("Enter Roman number: ");
    scanf("%99s", roman);
    printf("Decimal = %d\n", roman_to_decimal(roman));

    return 0;
}
