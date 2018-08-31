#include<stdio.h>
int main()
{ 
   //To copy source string in to destinaion in reverse order
   char s[10],d[10],i,j;
   printf("Enter a string\n");
   scanf("%s",s);
   printf("source string is %s\n",s);
   for(i=0;s[i];i++);
   for(i=i-1,j=0;i>=0;i--,j++)
       d[j]=s[i];
   d[j]='\0';
   printf("Destination string in reverse order:%s\n",d);
}
