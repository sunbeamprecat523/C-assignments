#include <stdio.h>

/* Function prototype */
float calculate(float num1, float num2, char op);

int main() {
    float operand1, operand2, result;
    char operator;

    printf("Enter first operand: ");
    scanf("%f", &operand1);

    printf("Enter operator (+, -, *, /): ");
    /* Note the space before %c to skip any leftover newline characters */
    scanf(" %c", &operator); 

    printf("Enter second operand: ");
    scanf("%f", &operand2);

    /* Call the calculator function */
    result = calculate(operand1, operand2, operator);

    return 0;
}


float calculate(float num1, float num2, char op) {
    float res = 0.0;

    switch (op) {
        case '+':
            res = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, res);
            break;
            
        case '-':
            res = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, res);
            break;
            
        case '*':
            res = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, res);
            break;
            
        case '/':
            /* Runtime safety validation to prevent crash */
            if (num2 == 0) {
                printf("Error: Division by zero is undefined.\n");
                return 0;
            }
            res = num1 / num2;
            printf("Result: %.2f / %.2f = %.2f\n", num1, num2, res);
            break;
            
        default:
            printf("Error: Invalid operator '%c'. Use +, -, *, or /.\n", op);
            break;
    }

    return res;
}

