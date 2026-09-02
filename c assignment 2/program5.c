#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
	{
       printf("a is greater\n ");
	}
	else if(b>c && b>a)
    {
		printf("b is greater");
	}
	else
	{
		printf("c is greater");

	}




	int d,e,f;
	printf("enter the value of d,e,f:\n");
	scanf("%d%d%d",&d,&e,&f);

    int max = (a>b&&a>c)?a: ( b>c&&b>a)? b :c; 

	//int max=(a>b)?(a>c?a:c):(b>c)?b:c;
	printf("max:%d",max);
	return 0;
}
