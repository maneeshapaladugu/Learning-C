#include<stdio.h>
int main()
{
   //To comapre 2 strings equal or not 
   char str1[20],str2[20];
   int l1,l2,i;
   printf("Enter string1\n");
   gets(str1);
   printf("Enter string2\n");
   gets(str2);
   for(l1=0;str1[l1];l1++);
   for(l2=0;str2[l2];l2++);
   if(l1!=l2)
   {
      printf("Strings are not equal\n");
      return;
   }
   else
   {
      for(i=0;str1[i];i++)
      {
         if(str1[i]!=str2[i])
            break;
      }
      if(str1[i]==str2[i])
         printf("Strings are equal\n");
      else
         printf("Strings are not equal\n");
   }
}



