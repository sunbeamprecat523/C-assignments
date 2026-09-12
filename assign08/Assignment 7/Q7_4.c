#include <stdio.h>
#include <string.h>

#define COUNT 5
#define LEN 100

void accept_names(char names[][LEN])
{
    int i;
    for (i = 0; i < COUNT; i++) {
        printf("Enter name %d: ", i + 1);
        scanf(" %99[^\n]", names[i]);
    }
}

void print_names(char names[][LEN])
{
    int i;
    for (i = 0; i < COUNT; i++)
        printf("%s\n", names[i]);
}

void sort_names(char names[][LEN])
{
    int i, j;
    char temp[LEN];

    for (i = 0; i < COUNT - 1; i++) {
        for (j = i + 1; j < COUNT; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main(void)
{
    char names[COUNT][LEN];

    accept_names(names);

    printf("\nNames before sorting:\n");
    print_names(names);

    sort_names(names);

    printf("\nNames after sorting:\n");
    print_names(names);

    return 0;
}
