#include<stdio.h>
#include<string.h>

	
		


int main()
{
	char str1[20]="desd";
	char str2[]="dbda";
	char str3[]="dac";
	
	char *arr[3] = {str1,str2,str3};
   
	printf("arr[0]:%s arr[0]:%u",arr[0],arr[0]);
	printf("arr[1]:%s arr[1]:%u",arr[1],arr[1]");
	 printf("arr[2]:%s arr[2]:%u",arr[2],arr[2]");

	
	return 0;
}

