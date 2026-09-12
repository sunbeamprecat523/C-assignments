#include <stdio.h>

#define MAX 10

void accept_matrix(int a[][MAX], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);
}

void print_matrix(int a[][MAX], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

int main(void)
{
    int a[MAX][MAX], rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &cols);

    if (rows > MAX || cols > MAX || rows <= 0 || cols <= 0) {
        printf("Invalid size.\n");
        return 0;
    }

    printf("Enter elements:\n");
    accept_matrix(a, rows, cols);

    printf("2-D Array:\n");
    print_matrix(a, rows, cols);

    return 0;
}
