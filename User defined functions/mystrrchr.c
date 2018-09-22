#include<stdio.h>
char *myStrrchr(const char*,char);
int main()
{
  //user defined strrchr() function
  //To locate last occurrence of the character in string
  char ch,*ptr,str[20];
  printf("Enter a string\n");
  scanf("%s",str);
  printf("str=%u\n",str);//base address of the string
  printf("Enter a character\n");
  scanf(" %c",&ch);
  ptr=myStrrchr(str,ch);
  if(ptr==0)
    printf("Not found\n");
  else
    printf("Found at %u\n",ptr);
}

char *myStrrchr(const char *p,char ch)
{
  int len;
  for(len=0;p[len];len++);//length of string
  for(len=len-1;len>=0;len--)
  {
    if(p[len]==ch)
      return (char*)(p+len);
  }
  return 0;
}


