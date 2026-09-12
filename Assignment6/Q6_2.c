#include <stdio.h>
#include <ctype.h>
#include <stddef.h>

size_t my_strlen(const char *str)
{
    size_t n = 0;
    while (str[n] != '\0') n++;
    return n;
}

char *my_strcpy(char *dest, const char *src)
{
    char *p = dest;
    while ((*p++ = *src++) != '\0');
    return dest;
}

char *my_strcat(char *dest, const char *src)
{
    char *p = dest;
    while (*p != '\0') p++;
    while ((*p++ = *src++) != '\0');
    return dest;
}

int my_strcmp(const char *a, const char *b)
{
    while (*a && *a == *b) { a++; b++; }
    return (unsigned char)*a - (unsigned char)*b;
}

int my_stricmp(const char *a, const char *b)
{
    while (*a && tolower((unsigned char)*a) == tolower((unsigned char)*b)) {
        a++; b++;
    }
    return tolower((unsigned char)*a) - tolower((unsigned char)*b);
}

char *my_strrev(char *str)
{
    size_t i = 0, j = my_strlen(str);
    if (j == 0) return str;
    j--;
    while (i < j) {
        char t = str[i]; str[i] = str[j]; str[j] = t;
        i++; j--;
    }
    return str;
}

char *my_strchr(const char *str, int ch)
{
    while (*str != '\0') {
        if ((unsigned char)*str == (unsigned char)ch) return (char *)str;
        str++;
    }
    return ch == '\0' ? (char *)str : NULL;
}

char *my_strstr(const char *str, const char *sub)
{
    if (*sub == '\0') return (char *)str;
    while (*str) {
        const char *a = str, *b = sub;
        while (*a && *b && *a == *b) { a++; b++; }
        if (*b == '\0') return (char *)str;
        str++;
    }
    return NULL;
}

int main(void)
{
    char a[100] = "Hello", b[100] = "World", temp[100];

    printf("strlen = %zu\n", my_strlen(a));
    printf("strcpy = %s\n", my_strcpy(temp, a));
    my_strcat(a, " ");
    my_strcat(a, b);
    printf("strcat = %s\n", a);
    printf("strcmp = %d\n", my_strcmp("abc", "abd"));
    printf("stricmp = %d\n", my_stricmp("ABC", "abc"));

    my_strcpy(temp, "Hello");
    printf("strrev = %s\n", my_strrev(temp));

    printf("strchr = %s\n", my_strchr("Hello", 'l'));
    printf("strstr = %s\n", my_strstr("Hello World", "World"));

    return 0;
}
