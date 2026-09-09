#include<stdio.h>
#include<math.h>
void my_pow(float base,float index);
int main()
{  
   float base,index;
   printf("enter base:\n");
   scanf("%f",&base);
   printf("enter index:\n");
   scanf("%f",&index);

   my_pow(base,index);
return 0;
}
void my_pow(float base,float index)
{
    double res=pow(base,index);
	printf("double=%lf",res);
}


