#include<stdio.h>
int main()
{
	int num1,num2,res;
	printf("enter number:\n");
	scanf("%d",&num1);
	printf("enter num1:\n");
	scanf("%d",&num2);
	while(num2!=0)
	{
		
		res=num1 % num2;
		printf("%d %% %d=%d\n",num1,num2,res);
		num1=num2;
		num2=res;
	}
	printf("gcd=%d",num1);
	return 0;
}

