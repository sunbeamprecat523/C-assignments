
#include <stdio.h>

// Function prototypes
int fibonacci_nth(int n);
void print_fibonacci_series(int terms);

int main() {
    int count = 10; 

    printf("The 5th term is: %d\n\n", fibonacci_nth(5));

    printf("The first %d terms of the Fibonacci series are:\n", count);
    print_fibonacci_series(count);

    return 0;
}

// 1. Function to calculate the nth term using recursion
int fibonacci_nth(int n) {
    // Base cases: 0th term is 0, 1st term is 1
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // Recursive formula: F(n) = F(n-1) + F(n-2)
    return fibonacci_nth(n - 1) + fibonacci_nth(n - 2);
}

// 2. Function to print a given number of terms
void print_fibonacci_series(int terms) {
    if (terms <= 0) {
        printf("Please enter a positive number of terms.\n");
        return;
    }

    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci_nth(i));
    }
    printf("\n");
}

