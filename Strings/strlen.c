#include<stdio.h>
#include<stdio.h>
int main()
{
  //Predefined strlen() function to find length of a string
  int len;
  char str[10];
  printf("Enter a string\n");
  scanf("%s",str);
  len=strlen(str);
  printf("String length=%di\n",len);
}
