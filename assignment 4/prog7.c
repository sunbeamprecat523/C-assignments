#include<stdio.h>
 int fibonacci(void);
   int main()
   {
       fibonacci();
       return 0;
   }   
   int fibonacci(void)
   {   
      int num;
      int a=0;
      int b=1;
      int res;
      printf("enter value of num:\n");
      scanf("%d",&num);
      for(int i=1;i<=num;i++)
      {
        res=a+b;
        printf("%d,",res);
        a=b;
        b=res;
     }
  return 0;
 
  }
 

