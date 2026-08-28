#include<stdio.h>
int main()
{       

	float cel;
	float F;
	printf("enter the value of temperature in celcius:\n");
	scanf("%f",&cel);
        F=(cel*9.0/5.0)+32;
	printf("fahrenhit:%f",F);
	printf("enter the value of temp in fahrenheit:\n");
	scanf("%f",&F);

	cel=5.0/9.0*(F-32);
	printf("cel:%f",cel);
	return 0;
}

