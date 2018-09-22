#include<stdio.h>
#include<string.h>
int main()
{
  //Predefined strncpy() function to copy src string to dest 
  int n;
  char s[20],d[20];
  printf("Enter source string\n");
  scanf("%s",s);
  printf("Enter a number\n");
  scanf("%d",&n);
  strncpy(d,s,n);
  printf("Destination string\n%s\n",d);
}

