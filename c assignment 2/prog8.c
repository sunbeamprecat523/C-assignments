#include<stdio.h>
int main()
{
	int quantity;
	float totalprice;
	printf("enter quantity:\n");
	scanf("%d",&quantity);
	if(quantity>30)
	{
		printf("totalprice=%f",(5*quantity)*0.1);
	}
	
	else if(quantity>50)
	{
	   printf("totalprice=%f",(5*quantity)*0.15);
	}
	else
	{
		printf("invalid");
	}
	return 0;
}
