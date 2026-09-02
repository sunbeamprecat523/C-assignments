#include<stdio.h>
int main()
{    
	//using if else ladder 
	int month,year;
	printf("enter month:\n");
	scanf("%d",&month);
	printf("enter year:");
	scanf("%d",&year);

	if(month==1)
	{
		printf("it has 31 days");
	}
	else if(month==2)
	{
		if(year%400==0 || year%100!=0 && year%4==0)
		{
			printf("feb has 29 days");
		}
		else
		{
			printf("feb has 28 days");
		}
	}
    else if(month==3)
	{
		printf("march has 31 days");
	}
	else if(month==4)
      {
          printf("april has 30 days");
      }
	else if(month==5)
	{
		printf("may has 31 days");
	}
    else if(month==6)
      {
          printf("june has 30 days");
      }
	else if(month==7)
	 {
		 printf("jully has 31 days");
	}
	else if(month==8)
	{
		printf("august has 31 days");
	}
	else if(month==9)
	{
		printf("september has 30 days");
	}
	else if(month==10)
	{
		printf("october has 31 days");
	
    }
	else if(month==11)
	{
		printf("november has 30 days");
	}
    else if(month==12)
	{
		printf("december has 31 days");
	}
	else
	{
		printf("invalid");
	}
	 
     int month1,year1;


       printf("enter month:\n");
       scanf("%d",&month1);
       printf("enter year:\n");
       scanf("%d",&year1);
       if(month1==1||month1==3||month1==5||month1==7||month1==8||month1==10||month1==12)
     {
		 printf("number of days :31\n ");
	 }
     else if (month1 == 4 || month1 == 6 || month1 == 9 || month1 == 11) {
        printf("Number of days: 30\n");
     }
    
    else if (month1 == 2) {
	   if((year1 % 400 == 0) || (year1 % 4 == 0 && year1 % 100 != 0)) 
	 {
        printf("Number of days: 29\n");
     }
   
    else {
        printf("Number of days: 28\n");
     }    
    }
	   else
		 {
			 printf("invalid month");
			 
		}
	  return 0;
}  

