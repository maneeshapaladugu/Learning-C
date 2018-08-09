#include<stdio.h>
int main()
{
   //program to convert a char from upper to lower case or lower to upper case
   char ch;
   printf("Enter a character\n");
   scanf("%c",&ch);
   if(ch>='A'&&ch<='Z')
      ch=ch|32;//to convert upper to lower case
   else if(ch>='a'&&ch<='z')
      ch=ch^32;//to convert lower to upper case
   else
      printf("Invalid character\n");
   printf("Ch=%c\n",ch);
}
