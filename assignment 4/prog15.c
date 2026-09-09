#include<stdio.h>
int main()
{
	print_bin(8);
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
		
		print_bin(num/2);
		printf("%d",num%2);

		return;
	}
}
