#include <stdio.h>

int main() {
    int base, index, result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter index: ");
    scanf("%d", &index);

    for (int i = 1; i <= index; i++) {
        result = result * base;
    }

    printf("Output: %d\n", result);

    return 0;
}
