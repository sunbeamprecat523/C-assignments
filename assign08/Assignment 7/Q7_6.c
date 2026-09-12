#include <stdio.h>
#include <stdlib.h>

int **allocate_matrix(int rows, int cols)
{
    int **matrix;
    int i;

    matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL)
        return NULL;

    for (i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            while (i > 0)
                free(matrix[--i]);
            free(matrix);
            return NULL;
        }
    }

    return matrix;
}

void free_matrix(int **matrix, int rows)
{
    int i;
    for (i = 0; i < rows; i++)
        free(matrix[i]);
    free(matrix);
}

int main(void)
{
    int rows, cols, i, j;
    int **matrix;

    printf("Enter rows and columns: ");
    scanf("%d%d", &rows, &cols);

    if (rows <= 0 || cols <= 0) {
        printf("Invalid size.\n");
        return 0;
    }

    matrix = allocate_matrix(rows, cols);

    if (matrix == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    printf("Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }

    free_matrix(matrix, rows);
    printf("Memory freed successfully.\n");

    return 0;
}
