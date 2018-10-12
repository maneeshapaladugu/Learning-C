//Recursive function to find the length of given string 
#include<stdio.h>
int length(char *p)
{
  static int l=0;
  if(*p)
  {
    length(++p);
    l++;
    return l;
  }
  else
    return 0;
}
int main()
{
  int len;
  char str[20];
  printf("Enter a string\n");
  gets(str);
  len=length(str);
  printf("Length of the given string:%d\n",len);
}
