#include<stdio.h>
int main()
{
	int num1,num2,res;
	printf("enter num1\n");
	scanf("%d",&num1);
	printf("enter num2\n");
	scanf("%d",&num2);
	char op;
	printf("enter operator\n");
	scanf(" %c",&op);
	switch(op)
	{
		case '+':
		{
			printf("%d+%d=%d",num1,num2,num1+num2);
			break;
		}
		case '-':
		{
			printf("%d-%d=%d",num1,num2,num1-num2);
			break;
		}
		case '*':
		{
			printf("%d*%d=%d",num1,num2,num1*num2);
			break;
		}
		case '/':
		{
			printf("%d/%d=%d",num1,num2,num1/num2);
			break;
        }
		default:
		{
			printf("invalid");
		}
	}

return 0;
}

      

