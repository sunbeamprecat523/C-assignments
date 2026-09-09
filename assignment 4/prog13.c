#include <stdio.h>

// Function prototype
int find_gcd(int a, int b);

int main() {
    int num1 = 48, num2 = 18;
    
    printf("The GCD of %d and %d is: %d\n", num1, num2, find_gcd(num1, num2));
    
    return 0;
}

// Recursive function to calculate GCD
int find_gcd(int a, int b) {
    // Base case: if the second number becomes 0, the first number is the GCD
    if (b == 0) {
        return a;
    }
    
    // Recursive call: pass 'b' as the first parameter, and 'a % b' as the second
    return find_gcd(b, a % b);
}

