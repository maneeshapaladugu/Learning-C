#include<stdio.h>
#include<string.h>
int main()
{
  //Predefined strcpy() function to copy source string in to destination 
  char s1[10],s2[10];
  printf("Enter source string\n");
  scanf("%s",s1);
  strcpy(s2,s1);
  printf("Destination string:\n%s\n",s2);
}
