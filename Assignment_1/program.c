#include <stdio.h>
int main()
{       

        /*signed int*/
	int a,b,add,sub,mult;
	printf("enter value of a and b\n");
	scanf("%d %d",&a,&b);
	add=a+b;
	sub=a-b;
	mult=a*b;
	printf("add=%d sub=%d mult=%d\n",add,sub,mult);
	/*unsigned int*/
	unsigned int a1,b1,add1,sub1,mult1;
	printf("enter value of a1 and b1\n");
    scanf("%u %u",&a1,&b1);
	add1=a1+b1;
	sub1=a1-b1;
	mult1=a1*b1;
	printf("add1=%d sub1=%d mult1=%d\n",add1,sub1,mult1);

    /*signed char*/
	char a2,b2,add2,sub2,mult2;
	printf("enter value of a2 and b2\n");
	scanf("%c %c",&a2,&b2);
	add2=a2+b2;
	sub2=a2-b2;
	mult2=a2*b2;
	printf("add2=%d sub2=%d mult2=%d\n",add2,sub2,mult2);

    /*unsigned char*/
	unsigned char a3,b3,add3,sub3,mult3;
    scanf("%c %c",&a3,&b3);
	add3=a3+b3;
	sub3=a3-b3;
	mult3=a3*b3;
    printf("add3=%d sub3=%d mult3=%d\n",add3,sub3,mult3);

    /*long*/
	long int a4,b4,add4,sub4,mult4;
	printf("enter value of a4 and b4\n");
	scanf("%ld %ld",&a4,&b4);
	add4=a4+b4;
	sub4=a4-b4;
    mult4=a4*b4;
	printf("add1=%ld sub1=%ld mult1=%ld\n",add4,sub4,mult4);




	return 0;

}

	
