#include <stdio.h>

void remove_chars(char *str2, const char *str1)
{
    int i, j, found;
    for (i = 0; str2[i] != '\0'; i++) {
        found = 0;
        for (j = 0; str1[j] != '\0'; j++) {
            if (str2[i] == str1[j]) {
                found = 1;
                break;
            }
        }
        if (found) {
            int k = i;
            while (str2[k] != '\0') {
                str2[k] = str2[k + 1];
                k++;
            }
            i--;
        }
    }
}

int main(void)
{
    char str1[100], str2[200];

    printf("Enter string1 (characters to remove): ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter string2: ");
    fgets(str2, sizeof(str2), stdin);

    remove_chars(str2, str1);
    printf("Result: %s", str2);
    return 0;
}
