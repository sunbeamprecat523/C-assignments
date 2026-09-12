#include <stdio.h>
int main(){char c;scanf(" %c",&c);if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))printf("%c\n",c^32);else puts("Not an alphabet.");return 0;}
