#include <stdio.h>

int main()
{
    int month, year;

    printf("Enter month (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    switch (month)
    {
        case 1:
            printf("Days in month = 31\n");
            break;

        case 2:
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                printf("Days in month = 29\n");
            else
                printf("Days in month = 28\n");
            break;

        case 3:
            printf("Days in month = 31\n");
            break;

        case 4:
            printf("Days in month = 30\n");
            break;

        case 5:
            printf("Days in month = 31\n");
            break;

        case 6:
            printf("Days in month = 30\n");
            break;

        case 7:
            printf("Days in month = 31\n");
            break;

        case 8:
            printf("Days in month = 31\n");
            break;

        case 9:
            printf("Days in month = 30\n");
            break;

        case 10:
            printf("Days in month = 31\n");
            break;

        case 11:
            printf("Days in month = 30\n");
            break;

        case 12:
            printf("Days in month = 31\n");
            break;

        default:
            printf("Invalid month\n");
            return 0;
    }

    /* Number of days in the year */
    switch ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        case 1:
            printf("Days in year = 366\n");
            break;

        case 0:
            printf("Days in year = 365\n");
            break;
    }

    return 0;
}
