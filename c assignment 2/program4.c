#include<stdio.h>
int main()
{
   int num1,num2;
   printf("enter value of num1 and num2:\n");
   scanf("%d%d",&num1,&num2);
   if(num1>num2)
   {
	   printf("max:%d",num1);
   }
   else
   {
   
	   printf("max:%d",num2);
      
   }
   int a,b;
   printf("enter value of a and b:\n");
   scanf("%d%d",&a,&b);
   int max=a>b ? a :b;
   printf("max=%d",max);
	   
   return 0;

}
