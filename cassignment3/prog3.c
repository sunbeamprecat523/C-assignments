#include<stdio.h>
int main()
{  
	//sum of number
	int num,res=0,rem;
	printf("enter a number:\n");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		res=res+rem;
		num=num/10;
	}
	printf("sum:%d",res);
 
	//reverse number
	int num1,res1=0,rem1;
	printf("enter a number:\n");
    scanf("%d",&num1);
	while(num1!=0)
	{
		rem1=num1%10;
		res1=res1*10+rem1;
		num1=num1/10;
	}
printf("rev:%d",res1);
   //pallindrome 

 int num2,res2=0,rem2,rev;
 int temp=num2;
      printf("enter a number:\n");
      scanf("%d",&num2);
      while(num2!=0)
      {
          rem2=num2%10;
          res2=res2*10+rem2;
          num2=num2/10;
      }
    if(temp==rev)
	{
   
		printf("it is pallindrome\n");
	}
	else 
	{
		printf("it is not pallindrome\n");
	}
//armstrong number
	int num3,res3=0,rem3;
   int temp1=num3;
        printf("enter a number:\n");
        scanf("%d",&num3);
        while(num3!=0)
        {
            rem3=num3%10;
            res3=res3+rem3*rem3*rem3;
            num3=num3/10;
        }
      if(temp1==res3)
      {
 
          printf("it is armstrong\n");
      }
      else
      {
          printf("it is not armstrong");
      }


return 0;
}


