#include <stdio.h>
void copy_lines(FILE *s,FILE *d){char line[500];while(fgets(line,sizeof(line),s))fputs(line,d);}
int main(){FILE *s=fopen("source.txt","r"),*d=fopen("destination.txt","w");if(!s||!d)return 1;copy_lines(s,d);fclose(s);fclose(d);printf("Copied successfully.\n");return 0;}
