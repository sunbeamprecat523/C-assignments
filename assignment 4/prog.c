#include<stdio.h>
#include<math.h>
void my_pow(void)

{
   int base,index,res=1;
   printf("enter base:\n");
   scanf("%d",&base);
   printf("enter index:\n");
   scanf("%d",&index);
   for(int i=1;i<=index;i++)
   {
       
	   res=(base*res);
   }
   printf("res:%d",res);
  
  
} 
int main()
{
     my_pow();
	 
	 return 0;

}
       

