#include <stdio.h>

#define N 3

void accept(int a[N][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &a[i][j]);
}

void print(int a[N][N])
{
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

void add(int a[N][N], int b[N][N], int c[N][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            c[i][j] = a[i][j] + b[i][j];
}

void subtract(int a[N][N], int b[N][N], int c[N][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            c[i][j] = a[i][j] - b[i][j];
}

void multiply(int a[N][N], int b[N][N], int c[N][N])
{
    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            c[i][j] = 0;
            for (k = 0; k < N; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
}

int main(void)
{
    int a[N][N], b[N][N], c[N][N];

    printf("Enter Matrix A (3x3):\n");
    accept(a);
    printf("Enter Matrix B (3x3):\n");
    accept(b);

    printf("\nAddition:\n");
    add(a, b, c);
    print(c);

    printf("\nSubtraction (A-B):\n");
    subtract(a, b, c);
    print(c);

    printf("\nMultiplication (A*B):\n");
    multiply(a, b, c);
    print(c);

    return 0;
}
