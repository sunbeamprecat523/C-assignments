#include <stdio.h>
int ones(unsigned char n){int c=0;while(n){c+=n&1;n>>=1;}return c;}
int main(){unsigned int x;unsigned char b;scanf("%u",&x);b=(unsigned char)x;if(ones(b)%2)b|=0x80;printf("%u\n",b);return 0;}
