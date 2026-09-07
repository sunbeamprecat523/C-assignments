#include<stdio.h>
int main()
{
	int num,i=1;
	printf("enter a number:");
	scanf("%d",&num);
	while(i*i<=num)
	if(num%i==0)
	{
		if(num%i==0)
		{
			printf("%d*%d=%d\n",i,num/i,num);
            
		
	    }
		i++;
	}
	return 0;
}
