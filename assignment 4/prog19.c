#include <stdio.h>

#define SUCCESS 0
#define ERROR_DIV_BY_ZERO -1
#define ERROR_INVALID_OP -2

int calculate(double num1, double num2, char op, double *result);

int main() 
{
    double a, b, res;
    char operation;
    int status;

    printf("Enter expression (e.g., 12.5 + 4.2): ");
    if (scanf("%lf %c %lf", &a, &operation, &b) != 3) {
        printf("Invalid input format.\n");
        return 1;
    }

    status = calculate(a, b, operation, &res);

    if (status == SUCCESS) {
        printf("Result: %.4f\n", res);
    } 
    else if (status == ERROR_DIV_BY_ZERO) {
        printf("Error: Division by zero is not allowed.\n");
    } 
    else if (status == ERROR_INVALID_OP) {
        printf("Error: Invalid operator '%c'. Use +, -, *, or /.\n", operation);
    }

    return 0;
}

int calculate(double num1, double num2, char op, double *result) 
{
    switch (op) {
        case '+':
            *result = num1 + num2;
            return SUCCESS;
            
        case '-':
            *result = num1 - num2;
            return SUCCESS;
            
        case '*':
            *result = num1 * num2;
            return SUCCESS;
            
        case '/':
            if (num2 == 0.0) {
                return ERROR_DIV_BY_ZERO;
            }
            *result = num1 / num2;
            return SUCCESS;
            
        default:
            return ERROR_INVALID_OP;
    }
}

