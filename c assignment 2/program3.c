#include<stdio.h>
int main()
{
   int num1;
   printf("enter the value of num1:\n");
   scanf("%d",&num1);
   if(num1>0)
   {
     printf("num1 is positive number");
   }
   else if(num1<0)
   {
     printf("num1 is negative number");
   }
   else 
   {
     printf("num1 is zero");
   }    
   return 0;
}
