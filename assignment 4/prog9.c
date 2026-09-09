#include<stdio.h>
void range_prime()
{
	int i,j,count=1,flag;
	printf("first 25 prime numbers:");
   for(i=4;count<=25;i++)
   {  
           flag=0;
	   for(j=2;j<i/2;j++)
	   {
          if(i%j==0)
		{
			  flag=1;
		      break;
		}
	    }	
	   if(flag==0)
	   {  
	   printf("%d",i);
	   count++;
	   }
	   printf("\n");
   }
}


void prime_num(int num)
{
    int i,flag=0;
	
    for(i=2;i<num;i++)
	{
       if(num%i==0)
	   {  
		   flag=1;
           break;
	  }
   }
	if(flag==1)
	{
		printf("number is not prime\n");
	}
	else
	{
	
	printf("number is prime");
     }

}



int main()
{     
	 int num;
	 printf("enter number:\n");
	 scanf("%d",&num);
     prime_num(num);
	 range_prime();

	 return 0;
}
