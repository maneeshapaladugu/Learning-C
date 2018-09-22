#include<stdio.h>
char *myStrcpy(char*,const char*);
int main()
{
  //User defined strcpy() function to copy source string in to destination 
  char s[10],d[20];
  printf("Enter source string\n");
  scanf("%s",s);
  myStrcpy(d,s);
  printf("Destination string:\n%s\n",d);
}
char *myStrcpy(char *d,const char *s)
{
  int i;
  for(i=0;s[i];i++)
     d[i]=s[i];
  d[i]='\0';
}
 
