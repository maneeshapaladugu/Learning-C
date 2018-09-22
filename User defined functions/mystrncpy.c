#include<stdio.h>
char *myStrncpy(char*,const char*,int);
int main()
{
  //User defined strncpy() function to copy src string to dest 
  int n;
  char src[20],dest[20];
  printf("Enter source string\n");
  scanf("%s",src);
  printf("Enter n value\n");
  scanf("%d",&n);
  myStrncpy(dest,src,n);
  printf("Destination string\n%s\n",dest);
}
char *myStrncpy(char *d,const char *s,int n)
{
  int i;
  for(i=0;i<n&&s[i]!='\0';i++)
    d[i]=s[i];
  for(;i<n;i++)
    d[i]='\0';
}

