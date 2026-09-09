#include<stdio.h>
int main()
{
	int base, index;
	printf("enter base:\n");
	scanf("%d",&base);
	printf("enter index:\n");
	scanf("%d",&index);

	int res=pow_num(base,index);
	printf("res:%d",res);
	return 0;
}
int pow_num(int b, int i)
{
	if (b==1||i==0)
	{
		return 1;
	}
	else
		return b*pow_num(b,i-1);
}
