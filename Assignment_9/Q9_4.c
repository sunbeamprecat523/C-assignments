#include <stdio.h>
void copy(FILE *s,FILE *d){int ch;while((ch=fgetc(s))!=EOF)fputc(ch,d);}
int main(int argc,char *argv[]){FILE *s,*d;if(argc!=3){printf("Usage: %s source destination\n",argv[0]);return 1;}s=fopen(argv[1],"r");d=fopen(argv[2],"w");if(!s||!d)return 1;copy(s,d);fclose(s);fclose(d);printf("Copied successfully.\n");return 0;}
