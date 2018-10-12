//Recursive function to reverse the string
#include<stdio.h>
char rev_str(char *s,int l)
{
  static int i=0;
  char t;
  if(l>=i)
  {
  t=s[l];
  s[l]=s[i];
  s[i]=t;
  i++;
  rev_str(s,--l);
  }
  else
   return 0;
  
}

int main()
{
  int len=0;
  char str[20];
  printf("Enter a string\n");
  gets(str);
  for(len=0;str[len];len++);
  rev_str(str,len-1);
  printf("After reverse\n");
  puts(str);
}
