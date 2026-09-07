#include<stdio.h>
int main()
{
	int num,fact=1,i=1;
	printf("enter number:");
	scanf("%d",&num);
	while(i<=num)
	{
		fact=fact*i;
		i++;
	   
	}
	printf("%d!=%d",num,fact);
return 0;
}
