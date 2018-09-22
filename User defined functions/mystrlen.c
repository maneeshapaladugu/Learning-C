#include<stdio.h>
int myStrlen(char*);
int main()
{
  //User defined strlen() function to find length of a string
  int ret;
  char str[10];
  printf("Enter a string\n");
  scanf("%s",str);
  ret=myStrlen(str);
  printf("Strlen=%d",ret);
}
int myStrlen(char *s)
{
  int i;
  for(i=0;s[i];i++);
  return i;
}
