#include<stdio.h>
#include<string.h>
int main()
{
  //Predefined strchr() function
  //To locate first occurrence of character in string
  char ch,*ptr,str[20];
  printf("Enter a string\n");
  scanf("%s",str);
  printf("str=%u\n",str);//base address of the string
  printf("Enter a character\n");
  scanf(" %c",&ch);
  ptr=strchr(str,ch);
  if(ptr==0)
    printf("Not found\n");
  else
    printf("Found at %u\n",ptr);
}
  
 
