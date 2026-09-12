#include <stdio.h>

#define MAX 10

int row_sum(int a[][MAX], int cols, int row)
{
    int j, sum = 0;
    for (j = 0; j < cols; j++)
        sum += a[row][j];
    return sum;
}

int column_sum(int a[][MAX], int rows, int col)
{
    int i, sum = 0;
    for (i = 0; i < rows; i++)
        sum += a[i][col];
    return sum;
}

int main(void)
{
    int a[MAX][MAX], rows, cols, i, j, r, c;

    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &cols);

    if (rows <= 0 || rows > MAX || cols <= 0 || cols > MAX) {
        printf("Invalid size.\n");
        return 0;
    }

    printf("Enter elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    printf("Enter row number (1-%d): ", rows);
    scanf("%d", &r);

    printf("Enter column number (1-%d): ", cols);
    scanf("%d", &c);

    if (r < 1 || r > rows || c < 1 || c > cols) {
        printf("Invalid row/column.\n");
        return 0;
    }

    printf("Row sum = %d\n", row_sum(a, cols, r - 1));
    printf("Column sum = %d\n", column_sum(a, rows, c - 1));

    return 0;
}
