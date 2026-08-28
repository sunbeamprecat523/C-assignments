#include<stdio.h>
	
int main()
{       

	int num;
	int temp;
	int rev;
	int d1,d2,d3,d4;
	printf("enter 4 digit number\n");
	scanf("%d",&num);
	temp=num;
	d1=num%10;
	num=num/10;
        d2=num%10;
	num=num/10;
	d3=num%10;
	num=num/10;
	d4=num%10;
	num=num/10;
	printf("d1=%d d2=%d d3=%d d4=%d\n",d1,d2,d3,d4);
	printf("%d=%d+%d+%d+%d\n",temp,d1*1000,d2*100,d3*10,d4);
	printf("rev: %d%d%d%d",d1,d2,d3,d4);
	
	return 0;

    
}

