#include <stdio.h>
#include <string.h>

void find_replace(char *source, const char *find, const char *replace)
{
    char result[1000] = "";
    char *pos, *start = source;
    size_t find_len = strlen(find);

    if (find_len == 0) return;

    while ((pos = strstr(start, find)) != NULL) {
        char temp[1000];

        strncpy(temp, start, (size_t)(pos - start));
        temp[pos - start] = '\0';
        strcat(result, temp);
        strcat(result, replace);

        start = pos + find_len;
    }

    strcat(result, start);
    strcpy(source, result);
}

int main(void)
{
    char source[1000], find[100], replace[100];

    printf("Source: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0';

    printf("Find: ");
    fgets(find, sizeof(find), stdin);
    find[strcspn(find, "\n")] = '\0';

    printf("Replace: ");
    fgets(replace, sizeof(replace), stdin);
    replace[strcspn(replace, "\n")] = '\0';

    find_replace(source, find, replace);
    printf("Output: %s\n", source);

    return 0;
}
