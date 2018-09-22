#include<stdio.h>
#include<string.h>
int main()
{
  //Predefined strcmp() fuction to compare two strings equal or not
  int ret;
  char str1[10],str2[20];
  printf("Enter string1 and string 2\n");
  scanf("%s%s",str1,str2);
  ret=strcmp(str1,str2);
  if(ret==0)
    printf("Strings are equal\n");
  else
    printf("Strings are not equal\n");
}

