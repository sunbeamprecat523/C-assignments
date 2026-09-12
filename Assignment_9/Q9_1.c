#include <stdio.h>
int main(){FILE *fp=fopen("source.txt","r");int ch;if(!fp)return 1;while((ch=fgetc(fp))!=EOF)putchar(ch);fclose(fp);return 0;}
