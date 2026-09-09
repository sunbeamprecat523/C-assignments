#include<stdio.h>
void my_fact(int);
int main()
{   
	int num;
	printf("enter number:\n");
	scanf("%d",&num);

	my_fact(num);
	
	return 0;
}
void my_fact(int n1)
{
	int fact=1,i=1;
	
	for(i=1;i<=n1;i++)
	{
		fact=fact*i;

	
	}
	printf("fact=%d",fact);
	
}

