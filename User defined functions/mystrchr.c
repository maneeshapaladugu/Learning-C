#include<stdio.h>
char *myStrchr(const char*,char);
int main()
{
  //user defined strchr() function
  //To locate first occurrence of the character in string
  char ch,*ptr,str[20];
  printf("Enter a string\n");
  scanf("%s",str);
  printf("str=%u\n",str);//base address of the string
  printf("Enter a character\n");
  scanf(" %c",&ch);
  ptr=myStrchr(str,ch);
  if(ptr==0)
    printf("Not found\n");
  else
    printf("Found at %u\n",ptr);
}
//Pointer method  
char *myStrchr(const char *p,char ch)
{
  for(;*p;p++)
  {
   if(*p==ch)
     return (char*)p;
  }
}

//Index method
/*char *myStrchr(const char *p,char ch)
{
  int i;
  for(i=0;p[i];i++)
  {
    if(p[i]==ch)
      return (char*)(p+i);
  }
  return 0;
}*/


