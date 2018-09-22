#include<stdio.h>
#include<string.h>
int main()
{
  //Pre defined strstr() function to locate substring
  char *ptr,str1[20],str2[20];
  printf("Enter string1\n");
  scanf("%s",str1);
  printf("Enter string2\n");
  scanf("%s",str2);
  printf("Str1=%u\n",str1);
  ptr=strstr(str1,str2);
  if(ptr==0)
    printf("Substring not found\n");
  else
    printf("Substring found at %u\n",ptr);
}
