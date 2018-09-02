#include<stdio.h>
int main()
{
   //To delete a specific character from the given string 
   char ch,str[20];
   int i,j=0;
   printf("Enter a string\n");
   gets(str);
   printf("Enter a character\n");
   scanf("%c",&ch);
   for(i=0;str[i];i++)
   {
     if(str[i]!=ch)
     {
         str[j++]=str[i];
     }
   }
   str[j]='\0';
   printf("%s\n",str);
}
