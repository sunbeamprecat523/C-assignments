#include<stdio.h>
int main()
{
	int num;
	int i=2;
	printf("enter number:\n");
	scanf("%d",&num);
	while(i<num)
	{
		if(num%i==0)
		{
			printf("%d",i);
		
		}
		else 
		{
			i++;
		}
	}
	return 0;
}
