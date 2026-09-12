#include <stdio.h>
#include <string.h>
#define FN "student.db"
typedef enum{ADD=1,DISPLAY,SEARCH_ROLL,SEARCH_NAME,MODIFY,REMOVE} menu_t;
struct student{int roll;char name[50];float marks;};
void add(){FILE*f=fopen(FN,"ab");struct student s;if(!f)return;scanf("%d %49s %f",&s.roll,s.name,&s.marks);fwrite(&s,sizeof s,1,f);fclose(f);}
void display(){FILE*f=fopen(FN,"rb");struct student s;if(!f){puts("No records.");return;}while(fread(&s,sizeof s,1,f))printf("%d %s %.2f\n",s.roll,s.name,s.marks);fclose(f);}
void search_roll(){FILE*f=fopen(FN,"rb");struct student s;int r,ok=0;scanf("%d",&r);if(!f)return;while(fread(&s,sizeof s,1,f))if(s.roll==r){printf("%d %s %.2f\n",s.roll,s.name,s.marks);ok=1;break;}if(!ok)puts("Not found.");fclose(f);}
void search_name(){FILE*f=fopen(FN,"rb");struct student s;char n[50];int ok=0;scanf("%49s",n);if(!f)return;while(fread(&s,sizeof s,1,f))if(!strcmp(s.name,n)){printf("%d %s %.2f\n",s.roll,s.name,s.marks);ok=1;break;}if(!ok)puts("Not found.");fclose(f);}
void modify(){FILE*f=fopen(FN,"rb+");struct student s;int r,ok=0;scanf("%d",&r);if(!f)return;while(fread(&s,sizeof s,1,f))if(s.roll==r){scanf("%49s %f",s.name,&s.marks);fseek(f,-(long)sizeof s,SEEK_CUR);fwrite(&s,sizeof s,1,f);ok=1;break;}if(!ok)puts("Not found.");fclose(f);}
void remove_rec(){FILE*f=fopen(FN,"rb"),*t=fopen("temp.db","wb");struct student s;int r,ok=0;scanf("%d",&r);if(!f||!t)return;while(fread(&s,sizeof s,1,f))if(s.roll==r)ok=1;else fwrite(&s,sizeof s,1,t);fclose(f);fclose(t);remove(FN);rename("temp.db",FN);if(!ok)puts("Not found.");}
int main(){int c;do{printf("\n1.Add 2.Display 3.SearchRoll 4.SearchName 5.Modify 6.Remove 0.Exit\nChoice: ");scanf("%d",&c);switch((menu_t)c){case ADD:add();break;case DISPLAY:display();break;case SEARCH_ROLL:search_roll();break;case SEARCH_NAME:search_name();break;case MODIFY:modify();break;case REMOVE:remove_rec();break;}}while(c);return 0;}
