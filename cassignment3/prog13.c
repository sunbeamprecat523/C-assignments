#include <stdio.h>

int main() {
    int n, a = 1, b = 1, c;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d", a);

        if (i < n)
            printf(", ");

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
