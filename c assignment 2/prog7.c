#include<stdio.h>
int main()
{
	  //using logical operator//
	   int year,days;
       printf("enter year:");
       scanf("%d",&year);
       if(year%4==0 &&year%100!=0 || year%400==0)
       {
           days=366;
       }
       else 
	   {
		  days=365;
	   }	  

       printf("no of days in %d=%d",year,days);

    	//without using logical operator//
	   int year1,days1;
	   printf("enter year1:");
       scanf("%d",&year1);
	   if(year1%400==0)
	   {
		   days1=366;
	   
	   }
	    else
		{
			if(year1%100==0)
			{
				days1=365;
			}
			else	
			{
				if(year%4==0)
				{
					days=366;
				}
			}
		}
	printf("no of days in %d=%d",year1,days1);

	//with conditional operator
     int year2,days2;
        printf("enter year:");
        scanf("%d",&year2);
       days2=(year2%400==0)?366:((year2%100==0)?365: (year2%4==0)?366:365);
	   printf("no of days in %d=%d",year2,days2);



       
        
	
	return 0;
}	
