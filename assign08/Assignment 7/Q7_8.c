#include <stdio.h>
#include <string.h>

void sort_names(int argc, char *argv[])
{
    int i, j;
    char *temp;

    for (i = 1; i < argc - 1; i++) {
        for (j = i + 1; j < argc; j++) {
            if (strcmp(argv[i], argv[j]) > 0) {
                temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    int i;

    if (argc < 2) {
        printf("Please provide names as command line arguments.\n");
        return 0;
    }

    sort_names(argc, argv);

    printf("Names in sorted order:\n");
    for (i = 1; i < argc; i++)
        printf("%s\n", argv[i]);

    return 0;
}
