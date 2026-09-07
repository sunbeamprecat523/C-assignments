#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            flag = 1;
            
        }
    }

    if (flag == 0)
        printf("Prime number");
    else
        printf("Not a prime number");

    return 0;
}
