#include<stdio.h>
char *myStrstr(const char*,const char*);
int main()
{
  //User defined strstr() function to locate substring
  char *ptr,str1[20],str2[20];
  printf("Enter string1\n");
  scanf("%s",str1);
  printf("Enter string2\n");
  scanf("%s",str2);
  printf("Str1=%u\n",str1);
  ptr=myStrstr(str1,str2);
  if(ptr==0)
    printf("Substring not found\n");
  else
    printf("Substring found at %u\n",ptr);
}
char *myStrstr(const char *s1,const char*s2)
{
  int i,j;
  for(i=0;s1[i];i++)
  {
    if(s1[i]==s2[0])
    {
      for(j=1;s2[j];j++)
      {
        if(s2[j]!=s1[i+j])
          break;
      }
      if(s2[j]=='\0')
      return (char*)(s1+i);
    }
  }
  return 0;
}
