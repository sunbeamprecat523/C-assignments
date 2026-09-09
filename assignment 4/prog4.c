#include <stdio.h>


int error_flag = 0;

/* Function prototype */
float calculate(float num1, float num2, char op);

int main() {
    float operand1, operand2, result;
    char operator;

    printf("Enter first operand: ");
    scanf("%f", &operand1);

    printf("Enter operator (+, -, *, /): ");
    
    scanf(" %c", &operator); 

    printf("Enter second operand: ");
    scanf("%f", &operand2);

    /* Reset the global flag before making the function call */
    error_flag = 0;

    /* Call the calculator function */
    result = calculate(operand1, operand2, operator);

    /* Check the global flag before displaying or using the result */
    if (error_flag == 1) {
        printf("Calculation aborted due to an error.\n");
    } else {
        printf("Result: %.2f %c %.2f = %.2f\n", operand1, operator, operand2, result);
    }

    return 0;
}

/* 
 * Function: calculate
 * Arguments: two operands and one character operator
 * Returns: Result of calculation if successful, otherwise 0.0 (sets error_flag to 1)
 */
float calculate(float num1, float num2, char op) {
    float res = 0.0;

    switch (op) {
        case '+':
            res = num1 + num2;
            break;
            
        case '-':
            res = num1 - num2;
            break;
            
        case '*':
            res = num1 * num2;
            break;
            
        case '/':
            /* Check for division by zero */
            if (num2 == 0) {
                printf("Error: Division by zero is undefined.\n");
                error_flag = 0;
                return 0.0;     
            }
            res = num1 / num2;
            break;
            
        default:
            printf("Error: Invalid operator '%c'. Use +, -, *, or /.\n", op);
            error_flag = 1; 
            break;
    }

    return res;
}

