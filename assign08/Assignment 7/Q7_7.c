#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    if (argc < 2) {
        printf("Please provide names as command line arguments.\n");
        return 0;
    }

    printf("Names:\n");
    for (i = 1; i < argc; i++)
        printf("%s\n", argv[i]);

    return 0;
}
