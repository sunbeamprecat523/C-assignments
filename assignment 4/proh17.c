#include<stdio.h>
int num1,num2,sum,product;

int main()
{  
	int sum1,product1,a,b; 
	printf("enter num1 num2 :\n");
	scanf("%d %d",&num1,&num2);
	calculate(&num1,&num2);

	printf("sum :%d",sum);
  printf("prod:%d",product);

	printf("enter a b :\n");
     scanf("%d %d",&a,&b);
    cal(&a,&b,&sum1,&product1);

	printf("sum :%d",sum1);
	printf("prod:%d",product1);

}
void calculate(int *ptr,int *ptr1)
{
    sum=*ptr+*ptr1;
	product=*ptr * *ptr1;

}
void cal(int *ptr2,int *ptr3,int *sum1,int *product1)
{
 *sum1=*ptr2+*ptr3;
      *product1=*ptr2 * *ptr3;
  
}
