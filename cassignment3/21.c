#include<stdio.h>
int main()
{
	int num,flag,i,count=0;
	printf("enter number:\n");
	scanf("%d",&num);
	for(num=num+1;count<5;num++)
	{
		int flag=1;
		{
			for(i=2;i<num;i++)
			{
				if(num%i==0)
				{
					flag=0;
					break;
				}
			}
		}
		
		if(flag==1)
		{
			printf("%d",num);
		}
         }
		return 0;
}
