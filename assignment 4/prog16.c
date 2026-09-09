
#include<stdio.h>
int main()
{
	print_bin(16);
}
void print_bin(int num)
{
	if(num==0)
	{
		printf("0");
		return;
	}
	else
	{
		
		print_bin(num/16);
		printf("%d",num%16);

		return;
	}
}
