#include <stdio.h>
void copy(FILE *s,FILE *d){int ch;while((ch=fgetc(s))!=EOF)fputc(ch,d);}
void display(FILE *fp){int ch;rewind(fp);while((ch=fgetc(fp))!=EOF)putchar(ch);}
void accept_write(FILE *fp){char x[500];printf("Enter data: ");scanf(" %499[^\n]",x);fputs(x,fp);}
int main(){FILE *s=fopen("source.txt","r"),*d=fopen("destination.txt","w");if(!s||!d)return 1;copy(s,d);fclose(s);fclose(d);d=fopen("destination.txt","a+");accept_write(d);printf("\nContents:\n");display(d);fclose(d);return 0;}
