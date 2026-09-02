#include<stdio.h>
int main()
{
	int num,rem,rev=0;
	int temp;
	printf("enter the number\n");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
         rem=num%10;
		 rev=rev*10+rem;
		 num=num/10;
    }
	printf("rev:%d",rev);
	if(temp==rev)
	{
		printf("pallindrome");
	}
	else
	{
		printf("not pallindrome");
	}	
    return 0;
}	

