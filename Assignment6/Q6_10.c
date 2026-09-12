#include <stdio.h>
#include <string.h>

int match_at(const char *s, const char *sub)
{
    int i = 0;
    while (sub[i] != '\0') {
        if (s[i] != sub[i]) return 0;
        i++;
    }
    return 1;
}

void find_replace_no_library(char *source, const char *find, const char *replace)
{
    char result[2000];
    int i = 0, k = 0, j, found;
    int find_len = 0, replace_len = 0;

    while (find[find_len] != '\0') find_len++;
    while (replace[replace_len] != '\0') replace_len++;

    if (find_len == 0) return;

    while (source[i] != '\0') {
        found = match_at(&source[i], find);

        if (found) {
            for (j = 0; j < replace_len; j++)
                result[k++] = replace[j];
            i += find_len;
        } else {
            result[k++] = source[i++];
        }
    }

    result[k] = '\0';

    i = 0;
    while (result[i] != '\0') {
        source[i] = result[i];
        i++;
    }
    source[i] = '\0';
}

void read_line(char *s, int size)
{
    int i = 0;
    fgets(s, size, stdin);
    while (s[i] != '\0') {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
        i++;
    }
}

int main(void)
{
    char source[1000], find[100], replace[100];

    printf("Source: ");
    read_line(source, sizeof(source));

    printf("Find: ");
    read_line(find, sizeof(find));

    printf("Replace: ");
    read_line(replace, sizeof(replace));

    find_replace_no_library(source, find, replace);
    printf("Output: %s\n", source);

    return 0;
}
