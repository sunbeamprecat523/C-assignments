#include<stdio.h>
int main()
{
	int empId, deptNo;
    char desgnCode;
    printf("enter empID:\n");
	scanf("%d",&empId);
    printf("enter deptNo:\n");
	scanf("%d",&deptNo);
	printf("enter desgnCode:\n ");
	scanf(" %c",&desgnCode);
	printf("Employee with employee id %d is working in ",empId);

	switch(deptNo)
	{
		case 10:
			{
				printf("Marketing department");
				break;
			}
		case 20:
	       {
			    printf("Maneger department");
				break;
		   }
		case 30:
		   {
			    printf("Sales department");
				break;
		   }
		case 40:
		   {
			    printf("Designing department");
		   }
		default:
		   {
			   printf("Invalid");
			   break;
		   }
    }
	switch(desgnCode)
	{
		case 'M':
			{
				 printf("as Manager");
				 break;
            }
		case 'S':
		{
			    printf("as Supervisor");
				break;
		}
		case 's':
		 {
			 printf("as Security officer");
			 break;
	     }
		case 'c':
		 {
			 printf("cleark");
			 break;
		}
		default:
		 {
			 printf("Invalid");
		 }
	}

return 0;
}




