
#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character\n");
	scanf("%c",&ch);
	printf("decimal:%d\n",ch);
	printf("octal:%o\n",ch);
	printf("hex:%x\n",ch);
	int ascii;
	printf("enter the ascii value\n");
	scanf("%d",&ascii);
	printf("%c",ascii);
	return 0;
}


