#include <stdio.h>
void binary(unsigned int n){int i;for(i=31;i>=0;i--)printf("%u",(n>>i)&1);putchar('\n');}
int main(){unsigned int n;scanf("%u",&n);binary(n);return 0;}
