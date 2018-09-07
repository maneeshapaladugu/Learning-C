#include<stdio.h>
int main()
{
   //To copy the source string in to destination 
   char s[10],d[10];
   int i;
   printf("Enter a string\n");
   scanf("%s",s);
   for(i=0;s[i];i++)
      d[i]=s[i];
   d[i]='\0';
   printf("Destination string is\n%s\n",d);
}


~                                                                                                                                              
~                                                  
