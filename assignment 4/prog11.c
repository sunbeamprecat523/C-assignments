#include<stdio.h>
int main()
{
	int num;
	printf("enter number:\n");
	scanf("%d",&num);
	int res=fact_num(num);
	printf("res:%d",res);
	return 0;
}
int fact_num(int n)
{
	if(n==1||n==0)
	{
		return 1;
	}
	else
		return n*fact_num(n-1);
}
