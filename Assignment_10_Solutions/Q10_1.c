#include <stdio.h>
int ones(unsigned int n){int c=0;while(n){c+=n&1;n>>=1;}return c;}
int main(){unsigned int n;scanf("%u",&n);printf("%d\n",ones(n));return 0;}
