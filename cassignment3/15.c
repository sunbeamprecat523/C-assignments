#include <stdio.h>

int main()
{
    int num1, num2, choice;

    do
    {
        printf("\n----- Calculator Menu -----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            printf("Enter num1: ");
            scanf("%d", &num1);

            printf("Enter num2: ");
            scanf("%d", &num2);
        }

        switch(choice)
        {
            case 1:
                printf("Result = %d\n", num1 + num2);
                break;

            case 2:
                printf("Result = %d\n", num1 - num2);
                break;

            case 3:
                printf("Result = %d\n", num1 * num2);
                break;

            case 4:
                if (num2 != 0)
                    printf("Result = %d\n", num1 / num2);
                else
                    printf("Cannot divide by zero\n");
                break;

            case 5:
                printf("Exiting calculator...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 5);

    return 0;
}
