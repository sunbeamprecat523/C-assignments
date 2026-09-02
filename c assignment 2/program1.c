#include<stdio.h>
int main()
{  
	int num1,num2;
	printf("enter the value of num1:\n");
	scanf("%d",&num1);
	printf("enter the value of num2\n");
	scanf("%d",&num2);
	if(num2!=0)
	{
       printf("div:%d",num1/num2);
	}
   else
   {
 
    printf("divide by 0 error");    
   }
   return 0;


}

