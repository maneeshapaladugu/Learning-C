#include<stdio.h>
#include<string.h>
void isPalindrome(char *str)
{
  //To find whether given string is a palindrome
  int i,j,l;
  l=strlen(str);
  for(i=0,j=l-1;i<j;i++,j--)
  {
    if(str[i]!=str[j])
    {
      printf("%s is not Palindrome\n",str);
      return;
    }
  }
  printf("%s is Palindrome\n",str);
}

int main()
{
  char str[20];
  printf("Enter a string\n");
  gets(str);
  isPalindrome(str);
}


