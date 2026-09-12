#include <stdio.h>
#include <stdlib.h>
void binary(unsigned int n){int i;for(i=31;i>=0;i--)printf("%u",(n>>i)&1);putchar('\n');}
int main(int argc,char*argv[]){if(argc!=2){printf("Usage: %s number\n",argv[0]);return 1;}binary((unsigned int)strtoul(argv[1],0,10));return 0;}
