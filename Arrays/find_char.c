#include<stdio.h>
int main()
{
   char str[20],ch;
   int i,count=0;
   printf("Enter a string\n");
   gets(str);
   printf("Enter a character\n");
   scanf(" %c",&ch);
   for(i=0;str[i];i++)
   {
      if(str[i]==ch)
         count++;
   }
   printf("char %c is presented %d time(s) in string %s\n",ch,count,str);
}  
