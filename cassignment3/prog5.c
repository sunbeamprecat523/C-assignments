#include<stdio.h>
int main()
{
	int num,res;
	int i=1;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num>0)
	{   
		res=num%i;
        printf("%d,",res);
		num=num/i;
	}
	i++;
return 0;
}
