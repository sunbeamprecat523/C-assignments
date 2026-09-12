#include <stdio.h>

void remove_char(char *str, char ch)
{
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] != ch)
            str[j++] = str[i];
    str[j] = '\0';
}

int main(void)
{
    char str[200], ch;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to remove: ");
    scanf(" %c", &ch);

    remove_char(str, ch);
    printf("Result: %s", str);
    return 0;
}
