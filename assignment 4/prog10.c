#include<stdio.h>

int leap_year(int year)
{
	if(year%4==0||year%100!=0&&year%400==0)
	{
		printf("leap year\n");
	}
	else
	{
		printf("not leap year");
	}
   return year;
}

void print_days(int month)
{
    switch(month)
    {
        case 1:
            printf("31 days\n");
            break;

        case 2:
            printf("28 days\n");
            break;

        case 3:
            printf("31 days\n");
            break;

        case 4:
            printf("30 days\n");
            break;

        case 5:
            printf("31 days\n");
            break;

        case 6:
            printf("30 days\n");
            break;

        case 7:
            printf("31 days\n");
            break;

        case 8:
            printf("31 days\n");
            break;

        case 9:
            printf("30 days\n");
            break;

        case 10:
            printf("31 days\n");
            break;

        case 11:
            printf("30 days\n");
            break;

        case 12:
            printf("31 days\n");
            break;

        default:
            printf("Invalid month\n");
    }
}



int main()
{
	int year;
	printf("enter year:\n");
	scanf("%d",&year);
	leap_year(year);
	int month;

    printf("Enter month number: ");
    scanf("%d", &month);

    print_days(month);
}
