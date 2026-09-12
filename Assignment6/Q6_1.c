#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[100] = "Hello";
    char b[100] = "World";
    char temp[100];

    printf("strlen(a) = %zu\n", strlen(a));

    strcpy(temp, a);
    printf("strcpy = %s\n", temp);

    strcat(a, " ");
    strcat(a, b);
    printf("strcat = %s\n", a);

    printf("strcmp = %d\n", strcmp("abc", "abd"));

#ifdef _WIN32
    printf("stricmp = %d\n", _stricmp("ABC", "abc"));
    strcpy(temp, "Hello");
    printf("strrev = %s\n", _strrev(temp));
#else
    printf("stricmp = not available in standard C on this compiler\n");
    printf("strrev = not available in standard C on this compiler\n");
#endif

    printf("strchr = %s\n", strchr("Hello", 'l'));
    printf("strstr = %s\n", strstr("Hello World", "World"));

    strncpy(temp, "Programming", 6);
    temp[6] = '\0';
    printf("strncpy = %s\n", temp);

    strcpy(temp, "Hello");
    strncat(temp, "World", 3);
    printf("strncat = %s\n", temp);

    printf("strncmp = %d\n", strncmp("abc", "abd", 2));

    {
        char s[] = "one,two,three";
        char *p = strtok(s, ",");
        printf("strtok: ");
        while (p != NULL) {
            printf("%s ", p);
            p = strtok(NULL, ",");
        }
        printf("\n");
    }

    return 0;
}
