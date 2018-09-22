#include<stdio.h>
int myStrncmp(char *str1,char *str2,int n);
int main()
{
  //User defined strncmp() fuction to compare two strings equal or not
  int ret,n;
  char str1[10],str2[20];
  printf("Enter string1: ");
  scanf("%s",str1);
  printf("Enter string2: ");
  scanf("%s",str2);
  printf("Enter n value: ");
  scanf("%d",&n);
  ret=myStrncmp(str1,str2,n);
  if(ret==0)
    printf("Strings are equal\n");
  else
    printf("Strings are not equal\n");
}

int myStrncmp(char *str1,char *str2,int n)
{
  int i;
  for(i=0;str1[i]&&i<n;i++)
  {
    if(str1[i]!=str2[i])
      break;
  }
  if(i==n)
    return 0;
  else
    return str1[i]-str2[i];
}

