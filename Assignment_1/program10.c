#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
        float s,perimeter=0;
	float area=0;
	printf("enter the value of a,b and c\n");
	scanf("%d%d%d",&a,&b,&c);
	perimeter=a + b + c;
        printf("perimeter=%f",perimeter);
	s=perimeter/2.0;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area=%f",area);

	return 0;
}
:
