#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COUNT 5
#define LEN 100

void accept_names(char *names[])
{
    int i;
    for (i = 0; i < COUNT; i++) {
        names[i] = (char *)malloc(LEN * sizeof(char));
        if (names[i] == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
        }

        printf("Enter name %d: ", i + 1);
        scanf(" %99[^\n]", names[i]);
    }
}

void print_names(char *names[])
{
    int i;
    for (i = 0; i < COUNT; i++)
        printf("%s\n", names[i]);
}

void sort_names(char *names[])
{
    int i, j;
    char *temp;

    for (i = 0; i < COUNT - 1; i++) {
        for (j = i + 1; j < COUNT; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

void free_names(char *names[])
{
    int i;
    for (i = 0; i < COUNT; i++) {
        free(names[i]);
        names[i] = NULL;
    }
}

int main(void)
{
    char *names[COUNT];

    accept_names(names);

    printf("\nNames before sorting:\n");
    print_names(names);

    sort_names(names);

    printf("\nNames after sorting:\n");
    print_names(names);

    free_names(names);

    return 0;
}
