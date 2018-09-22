#include<stdio.h>
#include<string.h>
int main()
{
  //Predefined strncmp() fuction to compare two strings equal or not
  int ret,n;
  char str1[10],str2[20];
  printf("Enter string1: ");
  scanf("%s",str1);
  printf("Enter string2: ");
  scanf("%s",str2);
  printf("Enter n value: ");
  scanf("%d",&n);
  ret=strncmp(str1,str2,n);
  if(ret==0)
    printf("Strings are equal\n");
  else
    printf("Strings are not equal\n");
}


