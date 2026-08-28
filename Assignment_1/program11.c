#include<stdio.h>
#include<limits.h>
int main()
{   

    printf("char:%%c %lu  %d to %d\n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
    printf("unsigned char:%%c %lu  %d to %d\n",sizeof(char),0,UCHAR_MAX);	
    printf("Short int:%%hd %lu %d to %d\n",sizeof(short int),SHRT_MIN,SHRT_MAX);
    printf("unsigned short int:%%hu %lu %d to %d\n",sizeof(unsigned short int),0,USHRT_MAX);
    printf("int:%%d %lu %d to %d\n",sizeof(int),INT_MIN,INT_MAX);
    printf("unsigned int:%%u %lu %u to %u\n",sizeof(unsigned int),0,UINT_MAX);
    printf("long int:%%ld %lu %ld to %ld\n",sizeof(long int),LONG_MIN,LONG_MAX);
    printf("unsigned long int:%%lu %lu %u to %u",sizeof(int),0,ULONG_MAX);

	return 0;

}	
