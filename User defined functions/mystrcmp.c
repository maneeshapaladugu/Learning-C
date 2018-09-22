#include<stdio.h>
int myStrcmp(const char*,const char*);
int main()
{
  //User defined strcmp() function to compare two strings equal or not 
  int ret;
  char str1[10],str2[20];
  printf("Enter string1 and string 2\n");
  scanf("%s%s",str1,str2);
  ret=myStrcmp(str1,str2);
  if(ret==0)
    printf("Strings are equal\n");
  else
    printf("Strings are not equal\n");
}

int myStrcmp(const char *s1,const char*s2)
{
  int i;
  for(i=0;s1[i];i++)
  {
    if(s1[i]!=s2[i])
       break;
  }
  if(s1[i]<s2[i])
    return -1;
  else if(s1[i]>s2[i])
    return 1;
  else
    return 0;
}

