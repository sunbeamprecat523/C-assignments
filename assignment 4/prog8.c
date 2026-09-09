#include <stdio.h>

int fibonacci(void)
{
    static int a = 0;
    static int b = 1;

    int next;

    next = a;
    a = b;
    b = a + next;

    return next;
}

int main()
{
    printf("%d ", fibonacci());
    printf("%d ", fibonacci());
    printf("%d ", fibonacci());
    printf("%d ", fibonacci());
    printf("%d ", fibonacci());
    printf("%d ", fibonacci());

    return 0;
}
