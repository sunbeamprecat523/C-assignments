#include <stdio.h>

void printPascalTriangle(int rows) {
    if (rows <= 0) {
        return;
    }

    int arr[rows][rows];

    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < rows - i - 1; space++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    printPascalTriangle(5);
    return 0;
}

