#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("Point lies at ORIGIN");
    }
    else if (y == 0)
    {
        printf("Point lies on X-AXIS");
    }
    else if (x == 0)
    {
        printf("Point lies on Y-AXIS");
    }
    else if (x > 0 && y > 0)
    {
        printf("Point lies in FIRST QUADRANT");
    }
    else if (x < 0 && y > 0)
    {
        printf("Point lies in SECOND QUADRANT");
    }
    else if (x < 0 && y < 0)
    {
        printf("Point lies in THIRD QUADRANT");
    }
    else
    {
        printf("Point lies in FOURTH QUADRANT");
    }

    return 0;
}
