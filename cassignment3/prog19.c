#include<stdio.h>
int main()
{
	int t;
    int n1,n2;
	printf("enter n1:\n");
	scanf("%d",&n1);
	printf("enter n2:\n");
	scanf("%d",&n2);

	for(int i=n1;i<=n2;i++)
	{
		for(int j=1;j<=10;j++)
	{
		printf("%d\n",t=i*j);
	}
	      
	}
return 0;
}
