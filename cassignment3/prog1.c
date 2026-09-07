#include<stdio.h>
int main()
{ 
	char ch;
	int num;
	printf("enter character:\n");
	scanf(" %c",&ch);
	int cnt=1;
	printf("enter number:");
	scanf("%d",&num);
	while(cnt<=num)
	{
		printf(" %c",ch);
		cnt++;
	}
	return 0;
}
