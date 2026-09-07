#include <stdio.h>
#include <math.h>

int main() {
    
   
   /* printf("a. Prime numbers between 1 to 100:\n");
    
    for (int i = 1; i <= 100; i++) {
        if (i <= 1) continue; 
        
        int flag= 1; 
        
        
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                flag= 0; 
                break;      
            }
        }
        
        if (flag) {
            printf("%d ", i);
        }
    }  */
    
 int temp,sum,rem,num;
 for(int num=1;num<=500;num++)
 
 {
  rem=0;
  for(temp=num;temp!=0;temp++)
  {
  rem=temp%10;
  sum=sum+rem*rem*rem;
  }
 }
if(sum==num)
{
printf("%d",rem);
}
    
   
    return 0;
}



